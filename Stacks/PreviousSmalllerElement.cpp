#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> previousSmallerElement(vector<int>& arr){
    stack<int> s;
    vector<int> ans(arr.size(),0);
    for(int i = 0; i<arr.size(); i++){
        while(!s.empty() && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return ans;
}
  

int main()
{
    vector<int> arr={3,1,0,8,6};
    vector<int> ans= previousSmallerElement(arr);
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}