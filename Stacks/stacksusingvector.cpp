// stacks using at a Arrays/vector
// creating a vector in the code and using it as a stack
// And change the behaviour of the vector to behave like a stack

#include<iostream>
#include<vector>


#include<algorithm>
using namespace std;
class stacks{
    vector<int> v;
    public:
    void push(int val){ //0(1)
        v.push_back(val);

    }
    void pop(){//0(1)
        v.pop_back();

    }
    int top(){//0(1)
        return v[v.size()-1];

    }
    bool empty(){//0(1)
        return v.size()==0;

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
