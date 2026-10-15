#include<iostream>
using namespace std;

bool getPath(TreeNode* root, int target, vector<int>& path) {
    if (root == nullptr) {
        return false;
    }
    
    path.push_back(root->val);
    
    if (root->val == target) {
        return true;
    }
    
    if (getPath(root->left, target, path) || getPath(root->right, target, path)) {
        return true;
    }
    
    path.pop_back();
    return false;
}

int main()
{
    vector<int> path;
    getpath(root, target, path);
    cout << "Path from root to node " << target << ": ";
    for (int val : path) {
        cout << val << " ";
    }
    
    return 0;
}