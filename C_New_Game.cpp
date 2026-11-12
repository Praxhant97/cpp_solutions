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
    set<int>s;
    map<int,int> m;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
        m[arr[i]]++;
    }
    arr.clear();
    // vector<int>arr;
    for(auto i:s){
        arr.push_back(i);
        
    }
    int ans=0;
     if(k==1){
            for(auto i:m){
                ans=max(ans,i.second);
            }
            cout<<ans<<endl;
            return;
     }
     int c=1;
     int start=0;
     int count=m[arr[0]];
     for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]+1){
            c++;
            count+=m[arr[i]];
            if(c==k){
                ans=max(ans,count);
                count-=m[arr[start]];
                start++;
                c--;
            }
        }
        else{
            ans=max(ans,count);
            count=m[arr[i]];
            c=1;
            start=i;
        }
     }
     ans=max(ans,count);
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