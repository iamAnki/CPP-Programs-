//print the binary tree in a zigzag form

#include <iostream>
#include <stack>
using namespace std;
struct Node {
   int data;
   struct Node *left, *right;
};
void zigZagTreeTraversal(struct Node* root){
   if (!root)
      return;
   stack<struct Node*> currentlevel;
   stack<struct Node*> nextlevel;
   currentlevel.push(root);
   bool LtR = true;
   while (!currentlevel.empty()) {
      struct Node* temp = currentlevel.top();
      currentlevel.pop();
      if (temp) {
         cout<<temp->data<<"\t";
         if (LtR) {
            if (temp->left)
               nextlevel.push(temp->left);
            if (temp->right)
               nextlevel.push(temp->right);
         }
         else {
            if (temp->right)
               nextlevel.push(temp->right);
            if (temp->left)
               nextlevel.push(temp->left);
         }
      }
      if (currentlevel.empty()) {
         LtR = !LtR;
         swap(currentlevel, nextlevel);
      }
   }
}
struct Node* insertNode(int data){
   struct Node* node = new struct Node;
   node->data = data;
   node->left = node->right = NULL;
   return (node);
}
int main() {
   struct Node* root = insertNode(3);
   root->left = insertNode(1);
   root->right = insertNode(5);
   root->left->left = insertNode(8);
   root->left->right = insertNode(7);
   root->right->left = insertNode(0);
   root->right->right = insertNode(4);
   cout << "ZigZag traversal of the given binary tree is \n";
   zigZagTreeTraversal(root);
   return 0;
}