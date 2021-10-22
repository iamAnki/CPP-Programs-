#include <bits/stdc++.h>
using namespace std;

// node class
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    Node(){
        this->next = nullptr;
    }
};

// linked list class
class LinkedList{
    public:
    Node *head;
    LinkedList(int data){
        this->head = new Node(data);
    }

    /***  INSERTION OPERATIONS  ***/
    // INSERTING ELEMENT AT THE END
    void insertAtEND(int data){
        Node *temp = head;
        Node *newNode = new Node(data);

        if(temp == nullptr){
            head = newNode;
        }
        else{
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // INSERTING ELEMENT AT THE FRONT
    void insertAtFRONT(int data){
        Node *temp = head;
        Node *newNode = new Node(data);
        if(temp == nullptr){
            newNode = head;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    // INSERTING AFTER AN ELEMENT
    void insertAfter(int data, int toBeInserted){
        Node *temp = head;
        Node *Next;
        Node *newNode = new Node(toBeInserted);
        while(temp->data != data){
            if(temp == nullptr){
                cout << "no such element fount ... " << endl;
                return;
            }
            temp = temp->next;
        }
        Next = temp->next;
        temp->next = newNode;
        newNode->next = Next;
    }

    // INSERTING BEFORE AN ELEMENT
    void insertBefore(int data, int toBeInserted){
        Node *temp = head;
        Node *Next;
        Node *newNode = new Node(toBeInserted);
        while(temp->next->data != data){
            if(temp->next == nullptr){
                cout << "no such element fount ... " << endl;
                return;
            }
            temp = temp->next;
        }
        Next = temp->next;
        temp->next = newNode;
        newNode->next = Next;
    }

    // INSERTION AT POSITION X (indexing start with one)
    void insertAtPosition(int data, int pos){
        int t=1;
        Node *newNode = new Node(data);
        Node *temp = head;
        Node *prev;
        if(pos <= 0){
            cout << "Invalid position ... " << endl;
            return;
        }
        else if(pos == 1){
            if(temp == nullptr){
                head = newNode;
            }
            else
            {
                newNode->next = head;
                head = newNode;
            }
            
        }
        else{
            while(t != pos)
            {
                if(temp == nullptr){
                    cout << "Exceeded length of linked-list" << endl;
                    return;
                }
                prev = temp;
                temp = temp->next;
                ++t;
            }
            prev->next = newNode;
            newNode->next = temp;
        }
    }

    /***  DELETION OPERATION  ***/
    //DELETING ELEMENT WITH VALUE INCLUDE DELETION OF FRONT AND LAST ELEMENT
    void deleteWithValue(int data){
        Node *temp = head;
        Node *next = head->next;
        Node *prev;
        if(head->data == data){
            head->next = nullptr;
            free(head);
            head = next;
        }
        else{
            while(temp->data != data){
                if(temp == nullptr){
                    cout << "not such element exists ... " << endl;
                    return;
                }
                prev = temp;
                temp = temp->next;
            }
            next = temp->next;
            temp->next = nullptr;
            free(temp);
            prev->next = next;
        }
    }

    //DELETING ELEMENT AT POSITION
    void deleteAtPOS(int pos){
        int t=1;
        Node *temp = head;
        Node *next = head->next;
        Node *prev = nullptr;
        if(pos == 1){
            head->next = nullptr;
            free(head);
            head = next;
        }
        else{
            while (t != pos){
                if(temp == nullptr){
                    cout << "length exceeded ... " << endl;
                    return;
                }
                prev = temp;
                temp = temp->next;
                ++t;
            }
            next = temp->next;
            temp->next = nullptr;
            free(temp);
            prev->next = next;
        }
    }

    /***  PRINTING LINKEDLIST  ***/
    void printLinkedList(){
        Node *temp = head;
        while (temp->next != nullptr)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
        
    }

    /***  LENGTH FUNCTION IN CLASS (iterative method)***/
    int length(){
        Node *temp = head;
        int i=0;
        while (temp != nullptr)
        {
            temp = temp->next;
            ++i;
        }
        return i;
    }

    /***  LENGTH OF THE LINKED-LIST (recursive method)***/
    int getLength(Node *head){
        Node *temp = head;
        if(temp == nullptr){
            return 0;
        }
        return 1+(getLength(temp->next));
    }

    /***  ACCESSING Nth ELEMENT  ***/
    // Nth element from start
    int get_Nth_fromStart(int n){
        int i=1;
        Node *temp = head;
        while(i!=n){
            temp = temp->next;
            ++i;
        }
        return temp->data;
    }

    // Nth from end
    int get_Nth_fromEND(int n){
        int i = length() - n + 1;
        return get_Nth_fromStart(i);
    }

    // middle element
    int middle(){
        Node *slow = head;
        Node *fast = head;
        if(slow == nullptr){
            return -1;
        }
        else{
            while ((fast!=nullptr) && (fast->next!=nullptr))
            {
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        return slow->data;

    }

    // find min and max in linked list
    void minMax(Node *h){
        int min = h->data, max=h->data;
        Node *temp = h;
        while (temp != nullptr)
        {
            if(min>temp->data){
                min = temp->data;
            }
            if(max<temp->data){
                max=temp->data;
            }
            temp = temp->next;
        }
        cout << "min -- " << min << " and max -- " << max << endl;
        return;
    }

    /***  SEARCHING A ELEMENT  ***/
    int searchElement(Node *head, int find, int size){
        Node *temp = head;
        int pos = 1;
        if(head->data == find){
            return 1;
        }
        else if(temp->next == nullptr){
            //will return negative number if not found
            return -(size+1);
        }
        return 1+searchElement(temp->next, find, size);
        
    }

};


int main(){
    LinkedList *linkedList = new LinkedList(10);
    linkedList->insertAtEND(5);
    linkedList->insertAtEND(45);
    linkedList->insertAtFRONT(50);
    linkedList->insertAfter(10,25);
    //linkedList->printLinkedList();
    linkedList->insertBefore(5, 30);
    //linkedList->printLinkedList();
    linkedList->insertAtPosition(89,3);
    //linkedList->printLinkedList();
    linkedList->insertAtPosition(1,1);
    linkedList->printLinkedList();
    linkedList->minMax(linkedList->head);
    //linkedList->printLinkedList();
    linkedList->deleteWithValue(1);
    //linkedList->printLinkedList();
    linkedList->deleteAtPOS(3);
    linkedList->insertAtEND(25);
    linkedList->printLinkedList();
    linkedList->minMax(linkedList->head);

    cout << "Length of the linked list is : " << linkedList->getLength(linkedList->head) << endl;
    cout << "Length of the linked list is : " << linkedList->length() << endl;
    cout << "Location of 45 in linked list is : " << linkedList->searchElement(linkedList->head, 45, linkedList->getLength(linkedList->head)) << endl;
    cout << "Location of 4 in linked list is : " << linkedList->searchElement(linkedList->head, 4, linkedList->getLength(linkedList->head)) << endl;

    cout << "6th element from start is : " << linkedList->get_Nth_fromStart(6) << endl;
    cout << "1th element from start is : " << linkedList->get_Nth_fromStart(1) << endl;
    cout << "3th element from end is : " << linkedList->get_Nth_fromEND(3) << endl;
    cout << "6th element from end is : " << linkedList->get_Nth_fromEND(6) << endl;

    cout << "middle elememt is : " << linkedList->middle() << endl;

}