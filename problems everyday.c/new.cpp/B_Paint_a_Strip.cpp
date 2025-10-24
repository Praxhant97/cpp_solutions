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

if (n % 2 == 0) {
    for (int i = 1; i <= n; ++i) {

cout << i <<" ";
}

cout << endl;

} else {



cout << -1 << endl;

}

}

return 0;

}