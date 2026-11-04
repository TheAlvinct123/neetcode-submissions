class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0;
        int bot = row - 1;

        while(top <= bot){                              //finding correct row
            int r = (top + bot) / 2;                    //start the middle most row and checking if target is greater or less than current row
            if(target > matrix[r][col-1]){              //if target is greater than the last element in this row. so top = r + 1.
                top = r + 1;
            }
            else if(target < matrix[r][0]){             //if target is less than the first element in this row. so bot = r - 1.
                bot = r - 1;   
            }
            else{
                break;
            }
        }

        if (!(top <= bot)) {                            //top should not be less than the bottom
            return false;
        }

        int r = (top + bot) / 2;                        //setting r to be middle of new top and bot
        int left = 0;
        int right = col - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (target > matrix[r][middle]) {           //if target is greater than middle of this row increase left by 1
                left = middle + 1;
            } else if (target < matrix[r][middle]) {    //if target is less than middle of this row decrease right by 1
                right = middle - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
