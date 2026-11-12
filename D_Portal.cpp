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
    int n,x,y;
    cin>>n>>x>>y;
    x--;
    y--; 
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> a,b;
    for(int i=0;i<n;i++){
        if(i<=x || i>y){
            a.push_back(arr[i]);
        }else{
            b.push_back(arr[i]);
        }
    }
    if(b.size()>0){
        rotate(b.begin(),min_element(b.begin(),b.end()),b.end());
        int idx=0;
        while(idx<a.size() && a[idx]<b[0]){
        idx++;
        }
        a.insert(a.begin()+idx,b.begin(),b.end());

    }




//     int m=b.empty() ? -1 : b[0] ;
//    auto it = a.begin();
//     while (it != a.end() && *it < m) it++;
//     a.insert(it, b.begin(), b.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" \n"[i==n-1];
    }
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
//https://www.elitepersonalfinance.com/write-for-us/?channel=Organic&medium=Google%20-%20Search