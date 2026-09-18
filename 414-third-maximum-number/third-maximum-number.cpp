class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(begin(nums),end(nums));
        vector<int> ans(begin(st),end(st));
        int r= ans.size();

        if(r<3) return ans[r-1];

        else return ans[r-3];
        
    }
};