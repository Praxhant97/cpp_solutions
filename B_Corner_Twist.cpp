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
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        for (int j=0;j<m;j++) {
            arr[i][j]=s[j]-'0';
        }
    }

    vector<vector<int>>brr(n,vector<int>(m));
    for (int i=0;i<n;i++) {
        string s;
        cin >> s;
        for (int j=0;j<m;j++) {
            brr[i][j]=s[j]-'0';
        }
    }
    vector<int>sr1(m,0),sr2(m,0);
    vector<int>sc1(n,0),sc2(n,0);


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sr1[j]+=arr[i][j];
            sr1[j]%=3;


            sr2[j]+=brr[i][j];
            sr2[j]%=3;


            sc1[i]+=arr[i][j];
            sc1[i]%=3;


            sc2[i]+=brr[i][j];
            sc2[i]%=3;
        }
    }
    bool ok=true;
    for(int i=0;i<n;i++){
    if(sc1[i]!=sc2[i]){
        ok=false;
    }

    }
    for(int i=0;i<m;i++){
        if(sr1[i]!=sr2[i]){
            ok=false;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}