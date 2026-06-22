class Solution {
public:
    bool isSafe(int row, int j, vector<string>& boared, int n) {
        for (int j1 = j; j1 < n; j1++) {
            if (boared[row][j1] == 'Q') {
                return false;
            }
        }

        for (int i = 0; i < n; i++) {
            if (boared[i][j] == 'Q') {
                return false;
            }
        }
        // left

        for (int i = row, j1 = j; i >= 0 && j1 >= 0; j1--, i--) {
            if (boared[i][j1] == 'Q') {
                return false;
            }
        }

        for (int i = row, j1 = j; i >= 0 && j1 < n; j1++, i--) {
            if (boared[i][j1] == 'Q') {
                return false;
            }
        }

        return true;
    }
    void nqueen(vector<vector<string>>& ans, vector<string>& boared, int j,
                int n, int row) {
        if (row == n) {
            ans.push_back(boared);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (isSafe(row, j, boared, n)) {
                boared[row][j] = 'Q';
                nqueen(ans, boared, j, n, row + 1);
                boared[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> boared(n, string(n, '.'));
        nqueen(ans, boared, 0, n, 0);

        return ans;
    }
};