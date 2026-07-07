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
    int x;
    int a1,b1,a2,b2;
    cin>>x;
    cin>>a1>>b1>>a2>>b2;
    int alice=a1+a2;
    int bob=b1+b2;
    bool ans=false;
    if(alice==bob){
        if(b1>=a1 && b2>=a2){
            ans=true;
        }
    }
    if(abs(alice-bob)>x){
        ans=false;
    }else if(abs(alice-bob)<x){
        ans=true;
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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