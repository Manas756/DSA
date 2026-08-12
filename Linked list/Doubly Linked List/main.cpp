#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<list> 
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
    public:
    DoublyList(){
        head=tail=NULL;
    }

    //Push Front
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
        head=tail=newNode;
        
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    //Push Back
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;

        }
    }
    //pop front
    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
        }
        else{
        Node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
        
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
    

    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};


int main()
{
    DoublyList dl;
    dl.push_front(10);
    dl.push_front(20);
    dl.push_back(30);
    dl.push_back(40);
    dl.pop_front();
    dl.pop_back();
    dl.printList();

    
    return 0;
}