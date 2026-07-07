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
        cin>>arr[i];
    }
    vector<int>subs;

    int curr_max=arr[0];
    int max_dist=0;
    for(int i=0;i<n;i++){
        if(curr_max<arr[i]){
            curr_max=arr[i];
        }
        if(arr[i]<curr_max){
            subs.push_back(i);
            max_dist=max(max_dist,curr_max-arr[i]);
        }
    }
    bool insubs=false;
    vector<int>modified=arr;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            insubs=true;
        }else if(insubs && (arr[i]-arr[i-1]<max_dist)){
            insubs=true;
        }else{
            insubs=false;
        }
        if(insubs){
            modified[i]+=max_dist;
        }

    }
    bool res=is_sorted(modified.begin(),modified.end());
    if(res){
        cout<<"YES"<<endl;
    }else{
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