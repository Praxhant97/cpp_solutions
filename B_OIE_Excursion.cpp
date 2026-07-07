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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1);
   
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    
    int curr = 1;
    int maxStreak = 1;
    
    for(int i=2;i<= n; i++){
        if(arr[i] ==arr[i-1]){
            curr++;
        }
        else{
            curr =1;
        }
        maxStreak =max(maxStreak, curr);
    }
   
    if(maxStreak>= m){
        cout << "NO\n";
    } else {
        cout << "YES\n";
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