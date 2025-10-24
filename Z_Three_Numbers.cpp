#include<bits/stdc++.h>
using namespace std;
int countTriples(int k, int S) {
    int result = 0;
    for (int Z = max(S - 2 * k, 0); Z <= min(k, S); Z++)
    {
        result += min(k, S - Z) - max(S - Z - k, 0) + 1;
    }
    return result;
}

int main() {
    int k, S;
    cin >> k >> S;
    cout << countTriples(k, S);
    return 0;
}
