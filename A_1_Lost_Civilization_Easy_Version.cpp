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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//     vector<int>ans={arr[0]};
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]+1){
//             continue;
//         }else{
//             ans.push_back(arr[i]);
//         }
//     }
//     cout<<ans.size()<<endl;

// }
    int l=arr[0];
    int r=arr[0];

    int ans=1;

    for (int i = 1; i<n;i++) {
        if (arr[i] - 1 < l || arr[i] - 1 > r) {
            ans++;
            l = arr[i];
        }

        r=arr[i];
    }

    cout<<ans<<endl;
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