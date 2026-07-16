class Solution {
public:
long long helper(vector<int>& nums,int mxi,vector<int> &prefixGcd,long long ans){
    for(int i=0;i<nums.size();i++){
        mxi=max(mxi,nums[i]);
        prefixGcd[i]=__gcd(nums[i],mxi);
        
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0;
        int j=prefixGcd.size()-1;
        while(i<j){

            ans+=__gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
            
        }
        return ans;
    }
    long long gcdSum(vector<int>& nums) {
         vector<int> prefixGcd(nums.size());
        return helper(nums,0,prefixGcd,0);
    }
};