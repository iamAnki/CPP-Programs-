/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool eq = true;
    void checkEqual(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL)
            return;
        else if(p == NULL || q == NULL)
        {
            eq = false;
            return;
        }
        checkEqual(p->left, q->left);
        
        if(p->val != q->val)
        {
            eq = false;
            return;
        }
        checkEqual(p->right, q->right);
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        TreeNode *t1, *t2;
        checkEqual(p, q);
        if(eq)
            return true;
        else
            return false;
    }
};