// https://leetcode.com/problems/path-sum-ii/

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
    
    vector<int>temp;
    vector<vector<int>> solution;
    void sol(TreeNode * root, int targetSum, int currentSum){
        if(root == NULL){
            return;
        }
        
        // recursive case
        
            temp.push_back(root -> val);
            currentSum += root ->val;
                
            if(currentSum == targetSum){
                if(root-> left == NULL and root -> right == NULL){
                    solution.push_back(temp);
                }
            }
            sol(root -> left,targetSum, currentSum);
            sol(root -> right, targetSum, currentSum);
            temp.pop_back();
        }
    
        
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        sol(root,targetSum,0);
        return solution;
    }
};