class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++){
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++){
                if(board[row][i] == '.')
                continue;
                if(seen.count(board[row][i]))
                return false;
                seen.insert(board[row][i]);
            }
        }
        for(int col = 0; col < 9; col++){
            unordered_set <char> seen;
            for (int i = 0; i < 9; i++){
                if (board[i][col]=='.')
                continue;
                if(seen.count(board[i][col]))
                return false;
                seen.insert(board[i][col]);
            }
        }
        for (int boxrow = 0; boxrow < 3; boxrow++){
        for (int boxcol = 0; boxcol < 3; boxcol++){
            unordered_set <char> seen;
            for (int i = 3 * boxrow; i < 3 * boxrow + 3; i++){
                for (int j = 3* boxcol; j < 3*boxcol + 3; j++){
                    
                    if (board[i][j] == '.') continue;
                    if (seen.count(board[i][j])) return false;
                    seen.insert(board[i][j]);
                }
            }
        }
        }

        return true;

    }
};
