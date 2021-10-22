#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
public:

    bool isleaf(Node* node)
    {
        return (node->left==NULL && node->right==NULL);
    }
    
    void addleft(Node* root, vector<int>& ans)
    {
        Node* node = root->left;
        while(node)
        {
            if(!isleaf(node))
                ans.push_back(node->data);
            if(node->left)
                node = node->left;
            else
                node = node->right;
        }
    }
    
    void addleaf(Node* root, vector<int>& ans)
    {
        if(isleaf(root))
        {
            ans.push_back(root->data);
            return;
        }
        if(root->left)
            addleaf(root->left, ans);
        if(root->right)
            addleaf(root->right, ans);
    }
    
    void addright(Node* root, vector<int>& ans)
    {
        Node* node;
        node = root->right;
        stack<int> temp;
        while(node)
        {
            if(!isleaf(node))
                temp.push(node->data);
            if(node->right)
                node = node->right;
            else
                node = node->left;
                
        }
        while(!temp.empty())
        {
            ans.push_back(temp.top());
            temp.pop();
        }
        
    }
    
    vector <int> printBoundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
        if(!isleaf(root))
            ans.push_back(root->data);
        
        addleft(root,ans);
        addleaf(root,ans);
        addright(root,ans);
        
    }
};


int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.printBoundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
} 