// https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return NULL;   
        }
        
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * n =  head -> next;
        
        while(curr and n){
            curr -> next = prev;
            prev = curr;
            curr = n;
            n = n -> next;
        }
        
        curr->next = prev;
        return curr;
        
        
        
        
    
    }
};