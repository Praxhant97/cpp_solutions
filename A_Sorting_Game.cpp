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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t=s;
    sort(t.begin(),t.end());
    vector<int>dp;
        if(s==t){
                cout<<"Bob"<<endl;
                return;    
        }
        for(int j=0;j<n;j++){
            if(s[j]!=t[j]){
                dp.push_back(j+1);
            }
        }
        cout<<"Alice"<<endl;
        cout<<dp.size()<<endl;
        for(auto i : dp) cout << i << " ";
        cout<<endl;
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