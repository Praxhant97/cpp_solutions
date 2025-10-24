#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int flag = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            cout << i;
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "-1";
    }

    return 0;
}
