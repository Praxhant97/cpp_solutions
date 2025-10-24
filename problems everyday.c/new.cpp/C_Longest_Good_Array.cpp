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

int solve(int l,int r) {
    
    long long diff = r - l;

    long long k = (-1 + sqrt(1 + 8 * diff)) / 2;
    
    return k + 1; 
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t ;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        int l,r;
        cin>>l>>r;
      
        cout<<solve(l,r)<<endl;
    }
    
    return 0;
}