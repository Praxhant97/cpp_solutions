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
// int gcd(int a,int b){
//     while(b!=0){
//         ll tmp=a%b;
//         a=b;
//         b=tmp;
//     }
//     return a;
// }

void solve() {
    // int n,k;
    // cin>>n>>k;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int left=0;
    // int right=n-1;
    // vector<int,int>unor(n);
   
    
    int n;
    int x;
    cin>>n>>x;
    
    vector<int>a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    if (x==1) {
        cout<<0<<endl;
        return;
    }
    vector<int> primes;
    long long temp=x;
    for (long long i=2; i*i<=temp;i++) {
        if (temp%i==0) {
            primes.push_back(i);
            while (temp%i==0) {
                temp/=i;
            }
        }
    }
    if (temp>1) {
        primes.push_back(temp);
    }
    
    long long maxist = 0;
    for (size_t p_idx = 0; p_idx < primes.size(); p_idx++) {
        long long p = primes[p_idx];
        long long current_stolen = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % p == 0) {
                current_stolen += a[i];
            }
        }
        
        maxist = max(maxist, current_stolen);
    }
    
    cout << maxist <<endl;


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