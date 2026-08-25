
//first approach brute force
//Approach 1

class Solution {
public:
        int findKthPositive(vector<int>& arr, int k) {
     int curr=1;
     int i=0;
     while(k>0){
      if(i<arr.size() && arr[i]==curr){
         i++;
      }
         else{
            k--;
            if(k==0){
               return curr;

            }
 }
               curr++;
        
      }
      return curr;
     }

    
};


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Using addtion of k in i
// Approach 2
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=k;
        while(s.count(ans)){
            ans+=k;
        }
        return ans;
        
    }
};
