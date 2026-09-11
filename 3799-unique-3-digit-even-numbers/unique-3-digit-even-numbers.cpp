class Solution {
public:

void solve(vector<int>& digits,int id,int& count){
    unordered_map<int,int> mp;
    // we need 3 digits
    if(id==3){
        if(digits[0]==0)
        return;

        if(digits[2]%2 ==0)
        count++;

        return;
    }
    

    for(int i=id;i<digits.size();i++){
        if(mp[digits[i]])
        continue;

        mp[digits[i]]=1;

        //choose
        swap(digits[id],digits[i]);

        //recursion
        solve(digits,id+1,count);
        
        //undo
        swap(digits[id],digits[i]);
    }
}
    int totalNumbers(vector<int>& digits) {
        int count=0;
        solve(digits,0,count);
        return count;
        
    }
};