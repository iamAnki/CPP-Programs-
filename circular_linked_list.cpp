 /// CIRCULAR LINKED LIST


#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(){};
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

 class CLL{
    public:
    Node *head;
    CLL(){
        head = nullptr;
    };
    CLL(int d){
        head = new Node(d);
        head->next = head;
    }

    // insertion 
    Node* insert(Node *h, int data){
        Node *newNode = new Node(data);
        if(h == nullptr){
            h = newNode;
            h->next = h;
            return h;
        }
        if(h->next == h){
            h->next = newNode;
            newNode->next = h;
            return h;
        }
        Node *temp = h;
        while(temp->next != h){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = h;       
        return h;
    }

    // deletion after last element
    Node* deleteNode(Node *h, int data){
        Node *temp = h->next;
        Node *prev = nullptr;
        while(temp->data != data){
            if(temp == h){
                return h;
            }
            prev = temp;
            temp = temp->next;
        }
        if(h->data == data){
            prev->next = temp->next;
            free(temp);
            return prev->next;
        }
        prev->next = temp->next;
        free(temp);
        return h;
    }

    // length/members in loop
    int getLength(Node *h){
        if(h==nullptr){
            return 0;
        }
        int count=1;
        Node *temp = h->next;
        while(temp != h){
            temp = temp->next;
            count++;
        }
        return count;
    }

    // print cirular linked list
    void printCLL(Node *h){
        if(h==nullptr){
            cout << "No CLL element present ... " << endl;
            return;
        }
        Node *temp = h;
        while(temp->next != h){
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << temp->data << " --> "<< temp->next->data << endl;
        return;
    }
 };


 int main(){
    CLL *cll = new CLL();
    
    cll->printCLL(cll->head);
    cout << "len : " << cll->getLength(cll->head) << endl;
    cll->head = cll->insert(cll->head, 4);
    cll->printCLL(cll->head);

    cout << "len : " << cll->getLength(cll->head) << endl;
    cll->head = cll->insert(cll->head, 5);
    cll->printCLL(cll->head);

    cll->head = cll->insert(cll->head, 25);
    cll->head = cll->insert(cll->head, 0);
    cll->head = cll->insert(cll->head, 87);
    cll->head = cll->insert(cll->head, 63);
    cll->head = cll->insert(cll->head, 18);
    cll->printCLL(cll->head);

    cout << "len : " << cll->getLength(cll->head) << endl;
    cll->head = cll->deleteNode(cll->head, 0);
    cll->printCLL(cll->head);

    cll->head = cll->deleteNode(cll->head, 0);
    cll->printCLL(cll->head);
    cll->head = cll->deleteNode(cll->head, 4);
    cll->printCLL(cll->head);
    cout << "len : " << cll->getLength(cll->head) << endl;
 }