#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        vector<int> points(n);

        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }

        bool can_add_point = false;

        for (int i = 1; i < n; ++i) {
            if (points[i] - points[i - 1] > 2) {

                can_add_point = true;
                break;
            }
        }

        if (can_add_point) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
