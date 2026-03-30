class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int row = 0; row<9; row++){
            for (int col = 0; col<9; col++){
                char val = board[row][col];

                if(val!='.'){
                    if(!seen.insert(string("r") + (char) row + val).second ||
                       !seen.insert(string("c") + (char) col + val).second ||
                       !seen.insert(string("b") + (char) (row/3) + (char) (col/3) + val).second){
                       return false;
                    }
                }

            }
        }
        return true;
    }
};
