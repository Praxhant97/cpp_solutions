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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
  int sum=0;
  int count=0;
  if(a==b){
    cout<<'0'<<endl;
    return;
  }
  for(int i=0;i<n;++i){
    if(a[i]!=b[i]){
        sum+=a[i];
    }
  }
  if(accumulate(a.begin(),a.end(),0)==0 || accumulate(b.begin(),b.end(),0)==n){
    cout<<"-1"<<endl;
    return;
  }
  if(sum%2==1){
    cout<<"1"<<endl;
  }else{
    cout<<"2"<<endl;
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