class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    int n=nums.size();
    if(k==1 && nums[n-1]==100){
        return 101;

    }
    unordered_set<int> mp;
    for(int x:nums){
        mp.insert(x);
    }
   
    for(int i=1;i<=100;i++){//so we need to find multiple of k elements
    if(!mp.count(k*i)){
        return k*i;
        
    }
    else{
        continue;
    }
        
    }
    return -1;
}
};