class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
     int sum=0,mi=0,ma=0;
     for(int& i: nums){
        sum+=i;
        mi=min(mi,sum);
        ma=max(ma,sum);
     }
     return ma-mi;
    }
};