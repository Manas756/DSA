class Solution {
public: 
bool isSafe(vector<string> &board,int row,int col,int n){
        //horizontal
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
            //veritcal
            for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
            }
            // left daigonal
            for (int i=row, j=col;i>=0 && j>=0;i--,j--){
                if(board[i][j]=='Q'){
                    return false;
                }
            }
                // right daigonal
            for (int i=row, j=col;i>=0 && j<n;i--,j++){
                if(board[i][j]=='Q'){
                    return false;
            }
        }
        return true;
    }
    void nqueens(vector<string> &board, int row,int n,int &total){
        if(row==n){
           total++;
            return;
        }

        for(int j=0;j<n;j++){
           
            if(isSafe(board,row,j,n)){
                board[row][j]='Q';
                nqueens(board,row+1,n,total);
                board[row][j]='.';
                


            }
        }
    }
    int totalNQueens(int n) {
         vector<string> board(n,string(n,'.'));
         int total=0;
        nqueens(board,0,n,total);
        return total;
        
    }
};