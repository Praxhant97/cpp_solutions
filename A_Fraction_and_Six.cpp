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
    string a,b;
    cin>>n>>k;
    cin>>a>>b;
    if(k>n){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>alph(26,0);
    for(int i=0;i<k;i++){
       alph[ b[i]-'a']--;
    }
    for(int i=0;i<n;i++){
        alph[a[i]-'a']++;
    }
    string s="six";
    // for(int i=0;i<n;i++){
    //     if(alph[a[i]-'a']>0){
    //         alph[a[i]-'a']--;
    //     }
    // }
    for (int i=0;i<3;i++) {
        alph[s[i]-'a']--;
    }


    for(int i=0;i<26;i++){
        if(alph[i]!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
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