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

void solve() {
    int n, m;
    cin >>n>>m;
    vector<int> d(n);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        d[x]++;
        d[y]++;
    }
    sort(d.begin(), d.end());
    if(d[0]==0)
        cout << "Brain Melt"<<endl;
    else if(d[n-1]==n-1 && d[n-2]==1)
        cout<<2<<endl;
    else
        cout<<"Many"<<endl;
        
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}