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
    string a;
    string b;
    cin>>a>>b;
    int cta=0;
    int ctb=0;
    for(int i=0;i<n;i++){
        if(a[i]=='f'){
            cta++;
        }
        if(b[i]=='f'){
            ctb++;
        }
    }
    string ne;
    if(cta>ctb){
        ne=a;
    }else if(cta<ctb){
        ne=b;
    }else{
        cout<<0<<endl;
        return;
    }
    int pairs = 0;
    int i = 0;
    for(;i<n-1;){
        if(ne[i]=='f' && ne[i+1]=='f'){
            pairs++;
            i+=2;


        }else{
            i++;
        }
    }
    int ans=min(pairs,abs(cta-ctb)/2);
    ans=abs(cta-ctb)-2*ans;
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