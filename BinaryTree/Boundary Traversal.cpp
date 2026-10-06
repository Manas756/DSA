#include<bits/stdc++.h>
using namespace std;

void addleftBoundary(Node* root,vector<int> &res){
    Node* curr=root->left;
    while(curr){
        if(!isleaf(curr)) res.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}
void addrightBoundary(Node* root,vector<int> &res){
    Node* curr=root->right;
    vector<int> temp;
    while(curr){
        if(!isleaf(curr)) temp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}
void addLeaves(Node* root,vector<int> &res){
    if(isLead(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left,res);
    if(root->right) addLeaves(root->right,res);
}

int main()
{
    Node* root=new Node(1);
    vector<int> res;
    if(!root) return res;
    if(!isleaf(root)) res.push_back(root->data);
    addleftBoundary(root,res);
    addLeaves(root,res);
    addrightBoundary(root,res);

    return res;
    
    return 0;
}