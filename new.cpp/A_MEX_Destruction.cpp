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
    vector<int> arr(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }

 bool isAllTrue = all_of(arr.begin(), arr.end(), [](int x) { return x != 0; });
    bool isAllNotTrue = all_of(arr.begin(), arr.end(), [](int x) { return x == 0; });
    if (isAllNotTrue) {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    int i = 1;
    while (i < n - 1) {
        if (arr[i] == 0 && arr[i - 1] != 0) {
            int j = i;
            while (j < n && arr[j] == 0)
                j++;
            if (j < n)
                cnt = 1;
            i = j;
        } else {
            i++;
        }
    }

    if (cnt)
        cout << 2 << endl;
    else if (isAllTrue)
        cout << 1 << endl;
    else
        cout << 1 << endl; 
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