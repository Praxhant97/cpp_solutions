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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>sets(n);
    vector<int>freq(m+1,0);
   for(int i=0;i<n;i++){
    int l;
    cin>>l;
    sets[i].resize(l);  
    for(int j=0;j<l;j++){
        cin>>sets[i][j];
        freq[sets[i][j]]++;

    }
   }
   bool possible=true;
   for(int i=1;i<=m;i++){
    if(freq[i]==0){
        possible=false;
    }
   }
   if(possible==false){
    cout<<"NO"<<endl;
    return;
   }
   int non_essential_count = 0;
    for (int i = 0; i < n; ++i) {
        bool is_non_essential = true;
        for (int x : sets[i]) {
            if (freq[x] == 1) {
                is_non_essential = false;
                break;
            }
        }
        if (is_non_essential) {
            non_essential_count++;
        }
    }
    if (non_essential_count>=2){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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