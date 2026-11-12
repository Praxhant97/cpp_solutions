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
string s;
cin>>s;
string t;
cin>>t;
string xyz="";
int l=s.size()+t.size();
// sort(s.begin(),s.end());
// sort(t.begin(),t.end());
int best=0;

// string pre="";
// string suff="";
// bool isthere;
for(int i=0;i<t.size();i++){
    // isthere=false;
    int j=i;
    for(int k=0;j<t.size() && k<s.size();k++){
        if(s[k]==t[j]){
        j++;
        
        }
    }
    best=max(best,j-i);
}

cout<<l-best<<endl;
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