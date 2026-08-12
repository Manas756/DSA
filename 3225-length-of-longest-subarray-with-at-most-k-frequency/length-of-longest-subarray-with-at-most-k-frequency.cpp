class Solution {
public:
  int maxSubarrayLength(vector<int>& nums, int k) {
    int count=0;
    int maxLength=0;
    int left=0;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;

        while(m[nums[i]]>k){
            m[nums[left]]--;
            left++;

        }
        maxLength=max(maxLength,i-left+1);
    }
     return maxLength; 
    }
};