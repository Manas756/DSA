class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        double average=0;
        double maxu=-DBL_MAX;
        double sum=0;
        if(n<2){
            return nums[0];
        }

        for(int right=0;right<n;right++){
            sum+=nums[right];

            if(right-left+1>k){
                sum-=nums[left];
                left++;

            }
            if(right-left+1==k){
                average=sum/k;
                maxu=max(maxu,average);
            }
            
        }
        return maxu;
        
    }
};