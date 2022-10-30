// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* Head = head;
        ListNode * prev = NULL;
        while(head){
            if(prev != NULL and prev-> val == head->val){
               
                    ListNode * n = head -> next;
                    prev->next = n;
                    delete head;
                    head = n;
                
            }
            else{
                prev = head;
                head = head -> next;
            }
        }
        return Head;
        
    }
};