#include<iostream>
#include<list>
using namespace std;
class stacks{
    list<int> ll;
    public:
    void push(int val){ //0(1)
        ll.push_front(val);

    }
    void pop(){//0(1)
        ll.pop_front();

    }
    int top(){//0(1)
        return ll.front();

    }
    bool empty(){//0(1)
        return ll.size()==0;

    }

};

//making a class for stacks name stacks

int main()
{
    stacks s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}
