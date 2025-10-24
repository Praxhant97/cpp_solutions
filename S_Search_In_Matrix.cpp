#include <bits/stdc++.h>
using namespace std;

bool search2DArray(int arr[][100], int N, int M, int target) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int N, M;

    cin >> N;

    cin >> M;

    int A[100][100]; 

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    int target;
  
    cin >> target;

    if (search2DArray(A, N, M, target)) {
        cout <<"will not take number";
    } else {
        cout <<"will take number" ;
    }

    return 0;
}