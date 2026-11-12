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
    vector<int>li(n);
    vector<int>ri(n);
    vector<int>ui(n);;
    vector<int>vi(n);
    for(int i=0;i<n;i++){
        cin>>li[i]>>ri[i]>>ui[i]>>vi[i];
    }
    int m=n;
    while(m>=0){
        int i=1;
        int count=0;
        for(int j=0;j<n;j++){
            if(i>=li[j] && i<=ri[j]){
                continue;
            }
            if(m-i+1>=ui[j] && m-i+1<=vi[j]){
                continue;
            }
            i++;
            count++;
            if(count==m){
                cout<<m<<endl;
                return;
            }
        }
        m--;
    }
    cout<<0<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}