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
    string s;
    cin>>s;
    vector<int>count1(k,0);
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count1[i%k]++;
        }
    }
    for(int i=0;i<k;i++){
        if(count1[i]%2!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    // vector<string> s(n+k);
    // for(int i=0;i<n;i++){
    //     cin>>s[i];
    // }
    // if(k>n){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // for(int i=0;i<n;i++){
    //     if(s[i]=="1"){
    //         s[i]="0";
    //         if(s[i+k]=="0"){
    //             s[i+k]="1";
    //         }
    //         else{
    //             s[i+k]="0";
    //         }
    //     }

    // }
    // for(int i=0;i<n;i++){
    //     if(s[i]=="1"){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    // cout<<"YES"<<endl;
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