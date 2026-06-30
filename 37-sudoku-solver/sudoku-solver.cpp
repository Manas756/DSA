class Solution {
public:
bool isSafe(vector<vector<char>>& board,int row,int col,char d){
    for(int j=0;j<9;j++){
        if(board[row][j]==d){
            return false;
        }
    }
        for(int i=0;i<9;i++){
        if(board[i][col]==d){
            return false;

    }
        }
    int srow=(row/3) * 3;
    int scol=(col/3) * 3;
    for(int i=srow;i<=srow+2;i++){
        for(int j=scol;j<=scol+2;j++){
            if(board[i][j]==d){
                return false;
            }
        }
    }
    return true;

}
bool helper(vector<vector<char>>& board,int row,int col){

if(row==9){
    return true;

}
    int nextRow=row,nextCol=col+1;
    if(nextCol==9){
        nextRow=row+1;
        nextCol=0;

    }


    if(board[row][col] !='.'){
       return helper(board,nextRow,nextCol);

    }
    for(int d='1';d<='9';d++){
        if(isSafe(board,row,col,d)){
            board[row][col]=d;
            if(helper(board,nextRow,nextCol)){
                return true;
            }
            board[row][col]='.';
        }
    }
    return false;


}
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};