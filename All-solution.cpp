#include <iostream>
#include <vector>

using namespace std;

void printSolution(const vector<int>& board) {
    int n = board.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(const vector<int>& board, int row, int col) {
    for (int i = 0; i < row; ++i) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

void solveNQueensUtil(vector<int>& board, int row, vector<vector<int>>& solutions) {
    int n = board.size();
    if (row == n) {
        solutions.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            solveNQueensUtil(board, row + 1, solutions);
            // No need to undo the move since we will overwrite the value in the next iteration
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> solutions;
    vector<int> board(n, -1);
    solveNQueensUtil(board, 0, solutions);
    return solutions;
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    vector<vector<int>> solutions = solveNQueens(n);

    cout << "Number of solutions: " << solutions.size() << endl;

    for (size_t i = 0; i < solutions.size(); ++i) {
        printSolution(solutions[i]);
    }

    return 0;
}
