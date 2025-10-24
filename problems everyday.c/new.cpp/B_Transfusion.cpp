#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }
        if (total_sum % n != 0) {
            cout << "NO\n";
            continue;
        }
        long long k = total_sum / n;
        int countO = (n + 1) / 2;
        int countE = n / 2;
        long long sum_odd = 0, sum_even = 0;
        for (int i = 0; i < n; ++i) {
            if ((i + 1) % 2 == 1) {
                sum_odd += a[i];
            } else {
                sum_even += a[i];
            }
        }
        if (sum_odd == k * countO && sum_even == k * countE) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}