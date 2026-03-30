class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int row = 0; row<9; row++){
            for (int col = 0; col<9; col++){
                char val = board[row][col];

                if(val!='.'){
                    if(!seen.insert(string("r") + char (row) + val).second ||
                       !seen.insert(string("c") + char (col) + val).second ||
                       !seen.insert(string("b") + char (row/3) + char (col/3) + val).second){
                       return false;
                    }
                }

            }
        }
        return true;
    }
};


// Within the if condition
// C++ will run Step 1 (it's false), so it moves to Step 2 (it's false), so it moves to Step 3.
// In this case, all three strings are successfully inserted into the set.
// If you have 10 valid (unique) numbers on the board, your seen set will contain 30 elements by the time the loops finish.
