class Solution {
public:
bool dfs( vector<int>& nums, int left, int right, int player1, int player2,bool turn){
    if(left>right) return player1>=player2;
    if(turn){
        return dfs(nums,left+1,right,player1+nums[left],player2,false) || dfs(nums,left,right-1,player1+nums[right],player2,false);
    }
    else {
        return dfs(nums,left+1,right,player1,player2+nums[left],true) && dfs(nums,left,right-1,player1,player2+nums[right],true);
    }

}
bool predictTheWinner(vector<int>& nums) {

        return dfs(nums, 0, nums.size()-1, 0, 0, true);   
    }
};