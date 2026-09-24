class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int minimum=INT_MAX;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            //int temp=nums[i];
             int digitsum=0;
            while(nums[i]>0){
            digitsum+=nums[i]%10;
            nums[i]/=10;
            }
            if(digitsum==i) minimum=min(minimum,digitsum);
        }
        if(minimum==INT_MAX){
            return -1;
        }
        return minimum;
    }
};