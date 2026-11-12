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
    string s;
    cin>>s;
    vector<int>sou;
    vector<int>kou;
    int ssize=0;
    int ksize=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            sou.push_back(i+1);
            ssize++;
        }else{
            kou.push_back(i+1);
            ksize++;
        }
    }
    if (ssize == 2) {
    cout << 1 << endl;
} else {
    cout << sou[ssize-1]-sou[0] << endl;
}
    // if(ssize<3){
    //     if(ssize==2){
    //         if(n%2==1){
    //             cout<<0<<endl;
    //             return;
    //         }else{
    //             cout<<1<<endl;
    //             return;
    //         }
    //     }
        // if(ssize==1){
        //     cout<<0<<endl;
        //     return;
        // }

    // }
    // if(n%2==0){
    //     cout<<sou[1]-sou[0]<<endl;

    // }else{
    //     cout<<1<<endl;
    // }

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