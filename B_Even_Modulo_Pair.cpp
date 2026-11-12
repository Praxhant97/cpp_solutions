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
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int limit = min(n, 60);
    
    for (int i=0;i<limit;i++) {
        for (int j=i+1;j<limit;j++) {
            if ((a[j] % a[i]) % 2 == 0) {
                cout << a[i] << " " << a[j] << "\n";
                return;
            }
        }
    }
    
    cout << -1 <<endl;


//     vector<ll> even, odd;

//     for(ll i=0;i<n;i++) {
//         ll x;
//         cin>>x;

//         if(x%2==0)
//             even.push_back(x);
//         else
//             odd.push_back(x);
//     }
//     if(even.size()>=2) {
//         cout<<even[0]<<" "<< even[1] <<endl;
//         return;
//     }
//     for (ll i=0;i+1<odd.size();i++) {
//     if ((odd[i+1]%odd[i])%2==0) {
//         cout<<odd[i]<<" "<<odd[i+1]<<endl;
//         return;
//     }
// }
//     if(even.size()==1) {
//         for(ll x=0;x< odd.size();x++) {
//             if((odd[x]% even[0]) % 2 == 0) {
//                 cout<<even[0] <<" "<<odd[x]<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<-1<<endl;
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