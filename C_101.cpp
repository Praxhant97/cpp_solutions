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
    int l=0;
    int r=n-1;
    int a1=0;
    int b1=0;
    while(l<=r){
        if(arr[l]==0 && a1==0){
            l++;
        }
        else if(arr[r]==0 && b1==0){
            r--;
        }
        else if(arr[l]==1 && a1==0){
            l++;
            a1=1;
        }
        else if(arr[r]==1 && b1==0){
            r--;
            b1=1;
        }
        else if(arr[l]==-1 && a1==0){
            arr[l]=1;
            a1=1;
            l++;
        }
        else if(arr[r]==-1 && b1==0){
            arr[r]=1;
            b1=1;
            r--;
        }
        else if(arr[l]==-1 && a1==1){
            arr[l]=0;
            l++;
        }
        else if(arr[r]==-1 && b1==1){
            arr[r]=0;
            r--;
        }
        else if(arr[l]==0 && a1==1){
            l++;
        }
        else if(arr[r]==0 && b1==1){
            r--;
        }
        else if(arr[l]==1 && a1==1){
            l++;
        }
        else if(arr[r]==1 && b1==1){
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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