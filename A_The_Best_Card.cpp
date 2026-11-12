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
bool prime(int x){
    bool res;
if(x<2){
return false;
}
int count=0;
for(int i=2;i*i<=x;i++){
    if(x%i==0){
        count++;
    }
}
if(count>0){
    return false;
}else{
    return true;
}
}

void solve() {
    int n;
    cin>>n;
    int x=n+1;
    bool xyz=prime(x);
    if(xyz==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t; // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}