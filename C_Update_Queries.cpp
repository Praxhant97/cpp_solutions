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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
    
    sort(arr.begin(),arr.end());
    string k;
    cin>>k;
    string c=k;
    vector<int> brr;
    sort(k.begin(),k.end());
    for(int i=0;i<arr.size();i++){
        if(i==0 || arr[i]!=arr[i-1]){
            brr.push_back(arr[i]);
        }
    }
    for(int i=0;i<brr.size();i++){
        s[brr[i]-1]=k[i];
    }
    cout<<s<<endl;

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