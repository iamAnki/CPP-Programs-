// https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * h = head;
        ListNode * p = head;
        bool collision = false;
        while(h and h->next){
            h = h->next->next;
            p = p -> next;
            
            if( h == p){
                cout << p->val << " " << h->val << endl;
                collision = true;
                break;
            }
        }
        
        return collision;
        
    }
};