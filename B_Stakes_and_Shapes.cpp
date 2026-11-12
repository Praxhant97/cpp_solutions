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
    int rock;
    int sci;
    int paper;
    cin>>rock>>sci>>paper;
    char ans;
    if(rock>= paper && rock>=sci){
        ans='P';
    }
    else if(paper>=rock && paper>=sci){
        ans='S';
    }
    else{
        ans='R';
    }
    // string (n,r);
    vector<char> res(rock+sci+paper,ans);
    for(int i=0;i<rock+sci+paper;i++){
        cout<<res[i];
    }
    cout<<endl;
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