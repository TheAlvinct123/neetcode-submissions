class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        int rTracker[9][9] = {0}; // initializing row tracker
        int cTracker[9][9] = {0}; // initializingcol tracker
        int sTracker[9][9] = {0}; // initializing subgrid tracker
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0' - 1; // example: ascii value of "0" = 48, ascii value of "1" = 49 so 49 - 48 = 1
                    int k = i / 3 * 3 + j / 3; // calculate the index of the 3x3 subgrid that contains the cell at position (i, j) in the Sudoku board.
                    if(rTracker[i][num] || cTracker[j][num] || sTracker[k][num]){
                        return false;
                    }
                    rTracker[i][num] = cTracker[j][num] = sTracker[k][num] = 1;
                }
            }
        }
        return true;
    }
};