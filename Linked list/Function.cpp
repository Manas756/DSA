#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head=tail=NULL;
    }

    //push_front
    void push_front(int val){//0(n)
        Node* newnode=new Node(val);// dynamic object
        if(head==NULL){
            head=tail=newnode;
            return;
        }else{
            newnode->next=head;
            head=newnode;
         
        }
    }
    //push_back
    void push_back(int val){//0(1)
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    //pop front
    void pop_front(){ //0(1)
        if(head==NULL){
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    //pop back
    void pop_back(){ //0(n)
        if(head==NULL){
            return;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insert(int val,int pos){//0(n)

        Node* newnode=new Node(val);
        if(pos<0){
            cout<<"Invalid positon"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid position"<<endl;
                return;
            }
            temp=temp->next;
          
        }  newnode->next=temp->next;
            temp->next=newnode;
            
    }
    int search(int key){//0(n)
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1; // Key not found
    }

    //print a Linked list
    void printLL(){//0(n)
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    cout<<"NULL"<<endl;
    }
};

int main(){
    list ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.printLL();
    cout<<ll.search(2)<<endl;
    
    


    return 0;
}
