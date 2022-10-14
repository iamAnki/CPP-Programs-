// https://leetcode.com/problems/path-sum-iii/

class Solution {
public:
    int count=0;
    void ans(TreeNode* root,long long sum,int target){
        if(root==NULL){
            return ;
        }
        if(sum+root->val==target){
            count++;
        }
        ans(root->left,sum+root->val,target);
        ans(root->right,sum+root->val,target);
    }
    void ans1(TreeNode* root,int target){
        if(root!=NULL){
            ans(root,0,target);
            ans1(root->left,target);
            ans1(root->right,target);
        }
    }
    int pathSum(TreeNode* root, int targetSum) {
        ans1(root,targetSum);
        return count;
    }
};