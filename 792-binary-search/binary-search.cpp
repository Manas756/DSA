class Solution {
public:
    int binsearc(vector<int>& nums, int tar,int st,int end) {
        if(st<=end){
            int mid = st +(end-st)/2;

            if(nums[mid]== tar) return mid;
            else if(nums[mid]<=tar){
                return binsearc(nums,tar,mid+1,end);

            }
            else{
                return binsearc(nums,tar,st,mid-1);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int tar) {
       return binsearc(nums,tar,0,nums.size()-1);
        
    }
};