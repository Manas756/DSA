class Solution {
public:
 void solve(string digits,int idx,vector<string>& mp, string curr,vector<string>& ans){
    
    if(idx==digits.size()){
        ans.push_back(curr);
        return;
    }

    int digit=digits[idx]-'0';
    for(char c:mp[digit]){
        solve(digits,idx+1,mp,curr+c,ans);
    }

}
vector<string> letterCombinations(string digits) {
    vector<string> ans;

    if(digits.empty()) return {};
    vector<string> mp = {
    "", "", "abc", "def",
    "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz"
};
    solve(digits,0,mp,"",ans);
    return ans;


        }
    
};