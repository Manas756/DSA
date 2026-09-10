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
int ans=0;

pair<int,int> dfs(TreeNode* root){
    if(root==nullptr)
    return {0,0};

    //sum of left subtree
    auto left = dfs(root->left);

    //sum of right subtree
    auto right = dfs(root->right);

    //Include current node

    int sum=left.first+right.first+root->val;
    int count=left.second+right.second+1;

    //check average
    if(root->val==sum/count)
    ans++;

    return {sum,count};
}
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
        
    }
};