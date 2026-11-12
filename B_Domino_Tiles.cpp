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
    cin >> n;
    string s;
    cin >> s;

    int valid_count=0;
    for (int first=0;first<=1;++first) {
        for (int second=0;second<=1;++second) {
            bool matches=true;
            for (int i=0;i<n;++i) {
                int expected;
                if(i%2==0){
                    expected=((i/2)%2==0) ? first : (1 -first);
                }else{
                    expected=((i/2)%2==0) ? second : (1-second);
                }
                if (s[i]!='?' && (s[i]-'0') != expected) {
                    matches = false;
                    break;
                }
            }
            if (matches) {
                valid_count++;
            }
        }
    }

    cout << valid_count << "\n";
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