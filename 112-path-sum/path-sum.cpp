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
bool helper(TreeNode* node,int targetSum){

    if(node==nullptr) return false;
    targetSum-=node->val;
    if(node->left==nullptr && node->right==nullptr){
        return targetSum==0;
    }

    return helper(node->left,targetSum) ||
           helper(node->right,targetSum);

}
    bool hasPathSum(TreeNode* root, int targetSum) {
       return  helper(root,targetSum);
        
    }
};