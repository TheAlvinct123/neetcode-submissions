class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0;
        int bot = row - 1;

        while(top <= bot){                      //finding correct row
            int r = (top + bot) / 2;
            if(target > matrix[r][col-1]){
                top = r + 1;
            }
            else if(target < matrix[r][0]){
                bot = r - 1;   
            }
            else{
                break;
            }
        }

        if (!(top <= bot)) {
            return false;
        }

        int r = (top + bot) / 2;              //resetting row 
        int left = 0, right = col - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (target > matrix[r][middle]) {
                left = middle + 1;
            } else if (target < matrix[r][middle]) {
                right = middle - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
