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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> count={1};
    
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count.back()++;
        }
        else{
            count.push_back(1);
        }
    }
    sort(count.begin(),count.end());
    int m=count.size();
    for(int i=0;i<m-1;i++){
        if(count[i]>k){
            cout<<m-i<<endl;
            return;
        }
        k-=count[i];
    }
    cout<<1<<endl;
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