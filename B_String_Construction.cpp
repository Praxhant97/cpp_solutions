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
    int n,k;
    cin>>n>>k;
    int x0=(n+1)/2;
    int x1=n/2;
    int y0=(n-k+1)/2;
    int y1=(n-k)/2;
    
    if(n-k==1){
        cout<<"-1"<<endl;
        return;
    }
    
    int length_0=x0-y0+1;
    int length_1=x1-y1+1;
    string res="";
    for(int i=0;i<y0;i++){
        int c0=1;
        if(i==0){
        c0=length_0;
        }
        res.append(c0,'0');
        if(i<y1){
            int c1=1;
            if(i==0){
                c1=length_1;
            }
            res.append(c1,'1');
        }
    }
    cout<<res<<endl;
    
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