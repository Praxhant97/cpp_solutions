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
    int x0,y0,r;
    cin>>x0>>y0>>r;
    int a=-r;
    // int x;
    int x1,y1;
    bool z=false;
    while(a<=r){
        int x=r*r-a*a;
        for(int b=-r;b<=r;b++){
            if(b*b==x){
                x1=a;
                y1=b;
                z=true;
                break;
            }

        }
        if(z){
            break;
        }
        a++;
    }
    cout<<x1+x0<<" "<<y1+y0<<endl;
    
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