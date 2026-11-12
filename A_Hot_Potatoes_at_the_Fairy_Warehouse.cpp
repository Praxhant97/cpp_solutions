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
    int m = 2 * n;
    int redScore = 0;
    int blueScore = 0;
    for (int i = 0; i < m; i++){
        if (s[i] == '1'){
            int finalPos = i;
            int nextPos = (i + 1) % m;
            if (s[nextPos] == '0'){
                finalPos = nextPos;
            }
            if (finalPos % 2 == 0){
                blueScore++;
            }
            else{
                redScore++;
            }
        }
    }

    cout<<redScore<<" "<<blueScore <<endl;

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