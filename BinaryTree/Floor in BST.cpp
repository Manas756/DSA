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

int main(){
    node* root=new node(8);
    root->left=new node(4);
    root->right=new node(12);
    root->left->left=new node(2);
    root->left->right=new node(6);
    root->right->left=new node(10);
    root->right->right=new node(14);

    int key=5;
    cout<<floorInbst(root,key)<<endl;

    return 0;
}