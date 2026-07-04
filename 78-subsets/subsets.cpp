class Solution {
public:
    void allSubsets(vector<int>& nums,vector<int> &ans,int i,vector<vector<int>> &getSubsets){
        if(i==nums.size()){
            //store subsets:
            getSubsets.push_back({ans});
            return;
        }
        //include
        ans.push_back(nums[i]);
        allSubsets(nums,ans,i+1,getSubsets);

        ans.pop_back();
        //exclude
        allSubsets(nums,ans,i+1,getSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> getSubsets;
        vector<int> ans;
        allSubsets(nums,ans,0,getSubsets);
        return getSubsets;
        
    }
};