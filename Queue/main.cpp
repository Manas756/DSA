#include<iostream>
#include<vector>


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

class Queue{
    Node* head;
    Node* tail;

    public:
    Queue(){
        head=NULL;
        tail=NULL;
    }

// Push
    void push(int data){
Node* newNode=new Node(data);

if(!empty()){
    tail->next=newNode;
    tail=newNode;
    

}else{head=newNode;
    tail=newNode;

}
    }


//Front
    int front(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->data;

    }

    //empty

    int pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            Node* temp=head;
            int removed = temp->data;
            head=head->next;
            delete temp;
            return removed;
        }

    }

   bool empty(){
    return head==NULL;

    }


};

int main()
{ 
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;
    
    return 0;
}