// https://leetcode.com/problems/middle-of-the-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* n = head;
        int counter = 0;
        while(n){
            counter++;
            n = n->next;
        }
        counter/=2;
        while(counter > 0){
            head = head->next;
            counter--;
        }
        
        
        return head;
        
    }
};