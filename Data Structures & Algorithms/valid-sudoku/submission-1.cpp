class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<char, vector<int>> checks;
        
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                char n = board[i][j];
                if (checks.find(n) != checks.end() && n != '.'){
                    if(checks[n][0] == i || checks[n][1] == j){
                        cout << " Number: "<< n << " Position 1: " <<
                                checks[n][0] << " " << checks[n][1] <<
                                " Position 2: " << i << " " << j << endl; 
                        return false;
                    }
                    else if(i/3 == checks[n][0]/3 && j/3 == checks[n][1]/3) {
                        cout << " Number: "<< n << " Position 1: " <<
                                checks[n][0] << " " << checks[n][1] <<
                                " Position 2: " << i << " " << j << endl; 
                        return false;
                    } 
                    else {
                        checks[n] = {i, j};
                    }
                }
                else {
                    checks[n] = {i, j};
                }
            }
        }

        return true;

    }
};
