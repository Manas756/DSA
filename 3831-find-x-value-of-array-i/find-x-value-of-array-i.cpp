class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();

        vector<long long> result(k, 0);
        vector<long long> prevcount(k, 0);

        for(int i=0;i<n;i++){
            //Ending on index i

            vector<long long > currCount(k,0);
            int currElemenREminder=nums[i]%k;
            currCount[currElemenREminder]++;

             for(int oldRem = 0; oldRem <= k-1; oldRem++) {
                int newRem=((long long)oldRem * nums[i]%k)%k;

                currCount[newRem]+=prevcount[oldRem];
        }
        prevcount=std::move(currCount);

        for(int x=0;x<=k-1;x++){
            result[x]+=prevcount[x];
        }
        }
        return result;

        
    }
};