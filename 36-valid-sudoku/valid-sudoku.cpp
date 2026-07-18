class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            for(int row = 0; row < 9; row++) {
            for(char d = '1'; d <= '9'; d++) {
                int cnt = 0;
                for(int j = 0; j < 9; j++) {
                    if(board[row][j] == d)
                        cnt++;
                }
                if(cnt > 1)
                    return false;
            }
        }

        for(int col = 0; col < 9; col++) {
            for(char d = '1'; d <= '9'; d++) {
                int cnt = 0;
                for(int i = 0; i < 9; i++) {
                    if(board[i][col] == d)
                        cnt++;
                }
                if(cnt > 1)
                    return false;
            }
        }

        for(int srow = 0; srow < 9; srow += 3) {
            for(int scol = 0; scol < 9; scol += 3) {

                for(char d = '1'; d <= '9'; d++) {
                    int cnt = 0;

                    for(int i = srow; i < srow + 3; i++) {
                        for(int j = scol; j < scol + 3; j++) {
                            if(board[i][j] == d)
                                cnt++;
                        }
                    }

                    if(cnt > 1)
                        return false;
                }
            }
        }

        return true;
        
    }
};