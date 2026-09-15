class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // so for the running sum we will
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];

        }
        return nums;

        
    }
};