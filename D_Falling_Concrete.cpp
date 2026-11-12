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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x-(i+1);

    }
    sort(arr.begin(),arr.end());
    int ans=1;
    int c=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]==arr[i-1]+1){
            c++;
        }else{
            c=1;
        }
        ans=max(ans,c);

    }
    cout<<ans<<endl;
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