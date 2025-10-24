#include <iostream>
#include <vector>
using namespace std;

// Function to check if all neighbors are 'x'
bool allNeighborsAreX(const vector<vector<char>>& A, int X, int Y) {
    int N = A.size();
    int M = A[0].size();
    int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    
    for (auto& dir : directions) {
        int newX = X + dir[0];
        int newY = Y + dir[1];
        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (A[newX][newY] != 'x') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int N, M, X, Y;
    cin >> N >> M;
    vector<vector<char>> A(N, vector<char>(M));
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }
    
    cin >> X >> Y;
    
    if (allNeighborsAreX(A, X - 1, Y - 1)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}