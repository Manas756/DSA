#include <bits/stdc++.h> // tc:0(n) sc:0(n)
using namespace std;
class solution {

    public:
    vector<int> topView(Node *root){
        vector<int> ans;
        if(root==NULL) return ans;
        map<int,int> map;
        queue<pair<Node*,int>> q;
        q.push(root,0);
        while(!q.empty()){
            auto it =q.front();
            q.pop();
            Node* node=it.first;
            int line =it.second;
            if(map.find(line)==map.end()){
                map[line]=node->data;
            }
            if(node->left) q.push({node->left,line-1});
            if(node->right) q.push({node->right,line+1});
        }
        for(auto it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
}