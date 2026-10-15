class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int result=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
             set<int> count;
            for(int j=i;j<n;j++){
                count.insert(nums[j]);

                result+=count.size()*count.size();
                }
            }
            return result;
        }      
};