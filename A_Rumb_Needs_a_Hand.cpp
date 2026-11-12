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
    vector<int>arr(n);
    vector<int> ind;
    vector<int> pos;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != i + 1) {
            ind.push_back(arr[i]);
            pos.push_back(i);
        }
    }
    reverse(ind.begin(), ind.end());

    for (int i = 0; i < (int)pos.size(); i++) {
        arr[pos[i]] = ind[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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