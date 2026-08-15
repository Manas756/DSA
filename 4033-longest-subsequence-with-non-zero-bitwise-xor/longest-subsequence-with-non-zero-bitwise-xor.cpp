class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        bool all =true;
        int result=0;
        for(int &i:nums){
            result=(result^i);
            if(i!=0){
                all=false;
            }
        }
        if(all){
            return 0;
        }
        return (result==0) ? n-1 :n; 
    }
};