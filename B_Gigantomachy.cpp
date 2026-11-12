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
    vector<int>a(n);
    vector<int>b(k);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    a.push_back(0);
    b.push_back(0);
    int l=0;
    int r=0;
    for(int i=0;i<n;i++){
        l+=((a[i]+1)-a[i+1]);

    }
    for(int j=0;j<k;j++){
        r+=((b[j]+1)-b[j+1]);
    }
    if(l>=r){
        cout<<"1"<<endl;
    }else{
        cout<<"2"<<endl;
    }




    // int winner;
    // int i=0;
    // while(a[n-1]!=0 && b[k-1]!=0){
    //     if(i%2==0){
    //         a[l]
    //     }




    //     // int mini=(a[l]-a[l+1]+1);
    //     // a[l]-=mini;
    //     // b[r]-=mini;
    //     // if(a[l]<a[l+1]){
    //     //     l++;
    //     // }
    //     // if(b[r]<b[r+1]){
    //     //     r++;
    //     // }
    // }
    // if(a[n-1]>b[k-1]){
    //     cout<<"1"<<endl;
    // }else{
    //     cout<<"2"<<endl;
    // }
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