#include<bits/stdc++.h>
using namespace std;

int floorInbst(node* root,int key){
    if(root==NULL) return -1;
    int floor=-1;
    while(root){
        if(root->data==key) return root->data;

        if(key<root->data) root=root->left;
        else{
            floor=root->data;
            root=root->right;
        }
    }
    return floor;
}