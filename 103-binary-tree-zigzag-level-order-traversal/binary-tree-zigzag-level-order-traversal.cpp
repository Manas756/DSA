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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;


        queue<TreeNode*> NodeQueue;
        NodeQueue.push(root);
        bool leftToRight=true;

        while(!NodeQueue.empty()){
            int size=NodeQueue.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* node=NodeQueue.front();
                NodeQueue.pop();

                //find the position to fill node value
                int idx=(leftToRight) ? i : (size-1-i);
                row[idx]=node->val;

                if(node->left) NodeQueue.push(node->left);

                if(node->right) NodeQueue.push(node->right);

            }
            //after this level
        leftToRight=!leftToRight;
        result.push_back(row); 
        }
        return result;
           
    }

};