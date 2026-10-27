class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m,string(n,'#'));
       
        for(int row=0;row<m;row++) ans[row][0]='.';
        {
        for(int col=0;col<n;col++) ans[m-1][col]='.';
        }
        return ans;

    }
};