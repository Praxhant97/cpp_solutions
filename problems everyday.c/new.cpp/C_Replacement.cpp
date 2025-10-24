#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i=0;i<N;++i) {
        std::cin >> A[i];
        if (A[i] > 0) {
            A[i] = 1;
        } else if (A[i] < 0) {
            A[i] = 2;
        }
    }

    
    for (int i = 0; i < N; ++i) {
        std::cout << A[i] << " ";
        }
         std::cout<<std::endl;
    

    return 0;
}
