class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        sort(begin(nums),end(nums));
        int maxgap=0;
        for(int i=1;i<n;i++){
            maxgap=max(maxgap,nums[i]-nums[i-1]);
        }
        return maxgap;
    }
};