class Solution {
public:
 int longestMonotonicSubarray(vector<int>& nums) {
  int n=nums.size(); 
   int maxCount=1;
   int countDec=1;
   int countInc=1;
  for(int i=1;i<n;i++){
      if(nums[i-1]>nums[i]){
       countDec++;
      countInc=1;
      }
      else if(nums[i-1]<nums[i]){ 
        countInc++;
       countDec=1;
      }
      else{
        countInc=1;
         countDec=1;

      }

      maxCount=max(maxCount,max(countInc,countDec));
    }
  return maxCount;  
    }
};