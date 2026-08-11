class Solution {
public:
 int missingInteger(vector<int>& nums) {
    unordered_set<int> s(begin(nums),end(nums));
    int sumprifix=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i-1]+1==nums[i]){
            sumprifix+=nums[i];
        }else{
        break;
        }
    }while(s.count(sumprifix)){
        sumprifix++;
    }


    return sumprifix;
 }
};