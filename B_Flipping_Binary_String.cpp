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

void solve(){
    ll n;
    cin >> n;
 
    string a;
    cin >> a;
 
    int c0 = 0;
 
    for (int i=0;i< n;i++)
    {
        if (a[i]=='0'){
            c0++;
        }
    }
    int c1=n-c0;
    if (c0%2) {
        cout<<c0<<endl;
        for (int i=0;i<n;i++)
        {
            if(a[i]=='0'){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    else if((c1 % 2) == 0) {
        cout<<c1<<endl;
        if (c1 != 0) {
            for (int i=0;i<n; i++){
                if (a[i]=='1'){
                    cout<<i+1<<" ";
                }
            }
            cout <<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
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