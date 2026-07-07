#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol() {
    ll m , a , b , c;
    cin >> m >> a >> b >> c;

    ll ans = min(a , m);
    ans += min(b , m);
    ans += min((2 * m) - min(a , m) - min(b , m) , c);
    cout << ans;
}

int main() {
    int tc; cin >> tc; while (tc--)sol(), cout << '\n'; return 0;
}