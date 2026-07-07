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
    string s;
    cin>>n;
    cin>>s;
    int p=s[0];
    bool x=true;
    for(int i=0;i<n;i++){
        if(s[i]!=p){
            x=false;
        }
    }
    string l=s;
    sort(s.begin(),s.end());
    string r=l;
    sort(r.rbegin(),r.rend());
    if(x==true){
        cout<<"1"<<endl;
        return;
    }
    else if(s==l || l==r){
        cout<<"2"<<endl;
        return;
    }else{
        cout<<"1"<<endl;
        return;
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