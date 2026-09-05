class Solution {
public:
     int firstStableIndex(vector<int>& nums, int k) {
    int n=nums.size();
    // calculating a prefix sum array
    vector<int> prefixSum(n+1,0);
    prefixSum[0]=nums[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=max(prefixSum[i-1], nums[i]);
    }
    // calculating the sufix sum array
    vector<int> suffixSum(n+1,0);
    suffixSum[n-1]=nums[n-1];

    for(int i=n-2;i>=0;i--){
        suffixSum[i]=min(suffixSum[i+1],nums[i]);
    }
    for(int i=0;i<n;i++){
        if(prefixSum[i]-suffixSum[i]<=k)
            return i;
            
    }
    return -1;
}
};