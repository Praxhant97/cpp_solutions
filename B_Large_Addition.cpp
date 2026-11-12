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
// bool isgood(int x,int y){
//     for(;x>=0;){}
// }

void solve() {
    ll n;
    cin>>n;
    vector<int>arr;
    while(n>0){
        arr.push_back(n%10);
        n=n-n%10;
        n=n/10;
    }
    reverse(arr.begin(),arr.end());
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(arr[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    if(arr[arr.size()-1]==9){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    // if(arr[0]==0){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }
    // cout<<endl;
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