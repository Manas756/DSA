class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int k=0;k<n;k++){
            if(n%(k+1) == 0) ans+=nums[k]*nums[k];
        }
           

        return ans;

    }
};