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
    cin>>a;
    string b;
    cin>>b;
    int ae1=0;
    int be1=0;
    int ao1=0;
    int bo1=0;
    if(a==b){
        cout<<"YES"<<endl;
        return;
    }
    if(n<2){
        if(a!=b){
            cout<<"NO"<<endl;
            return;
        }
    }
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]=='1'){
                ae1++;
            }
            if(b[i]=='1'){
                be1++;
            }
        }else{
            if(a[i]=='1'){
                ao1++;
            }
            if(b[i]=='1'){
                bo1++;
            }
        }
        
    }
    bool xyz=false;
    if(ae1==be1 && ao1==bo1){
        xyz=true;
    }
    if(xyz){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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