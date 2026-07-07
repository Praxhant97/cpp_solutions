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
    int count=0;
    int n=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' || s[i]=='3'){
            count++;
        }
    }
    int max_valid=count;
    int l2=0;
    int r13=count;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2'){
            l2++;
        }
        else if(s[i]=='1' || s[i]=='3'){
            r13--;
        }
        max_valid=max(max_valid, l2+r13);

    }
cout<<n-max_valid<<endl;


    
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