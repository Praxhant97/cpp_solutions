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
long long getOne(long long a, long long m)
{
    return m / a;
}
 
long long getTwo(long long a, long long b, long long m)
{
    return m / lcm(a, b);    
}
 
long long getThree(long long a, long long b, long long c, long long m)
{
    return m / lcm(lcm(a, b), c);
}
 
long long get(long long a, long long b, long long c, long long m)
{
    long long c1 = getOne(a, m);
    long long c2 = getTwo(a, b, m) + getTwo(a, c, m);
    long long c3 = getThree(a, b, c, m);
    return (c1 - c2 + c3) * 6 + (c2 - 2 * c3) * 3 + c3 * 2;
}
void solve() {
    long long a, b, c, m;
    cin >> a >> b >> c >> m;                                                                      
    cout << get(a, b, c, m) << " " << get(b, a, c, m) << " " << get(c, a, b, m) << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t ;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}