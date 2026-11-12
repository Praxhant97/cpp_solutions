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
    int q;
    cin>>n>>q;
    // string a;
    // string b;
    // cin>>a>>b;
    // for(int i=0;i<k;i++){
    //     vector<int>leta(26,0);
    //     vector<int>letb(26,0);
    //     int x,y;
    //     cin>>x>>y;
    //     int ans=0;
    //     // string a1=a.substr(x-1,y-x+1);
    //     // string b1=b.substr(x-1,y-x+1);
    //     // sort(a1.begin(),a1.end());
    //     // sort(b1.begin(),b1.end());
    //     for(int j=x-1;j<y;j++){
    //         leta[a[j]-'a']++;
    //         letb[b[j]-'a']++;

    //     }
    //     for(int j=0;j<26;j++){
    //         if(leta[j]>letb[j]){
    //             ans+=leta[j]-letb[j];
    //         }
    //     }
    //     cout<<ans<<endl;

    // }
     vector<vector<int>> pre1(n+1,vector<int>(26,0));
    vector<vector<int>> pre2(n+1,vector<int>(26,0));

    for (int i=1;i<=n;i++){
        char c;
        cin>>c;
        pre1[i][c-'a']++;

        for (int j=0;j<26;j++)
            pre1[i][j]+=pre1[i-1][j];
    }
    for (int i=1;i<=n;i++){
        char c;
        cin >> c;
        pre2[i][c-'a']++;

        for (int j=0;j<26;j++)
            pre2[i][j]+=pre2[i-1][j];
    }
    while (q--){
        int l, r;
        cin >> l >> r;

        int dif = 0;

        for (int c = 0; c < 26; c++){
            int v1=pre1[r][c]-pre1[l-1][c];
            int v2=pre2[r][c] - pre2[l - 1][c];

            dif += abs(v1-v2);
        }
        cout << dif / 2 <<endl;
    }
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