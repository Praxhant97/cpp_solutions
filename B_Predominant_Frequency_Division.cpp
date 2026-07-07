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
    int count1=0;
    int count2=0;
    int count3=0;
    vector<int>p1(n);
    vector<int>p2(n);
    int mini=INT_MAX;
    bool xyz=false;
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
       
    }
    for(int i=0;i<n;i++){
         if(arr[i]==1){
            count1++;
            count2++;
        }
        else if(arr[i]==2){
            count2++;
            count1--;
        }
        else{
            count2--;
            count1--;
        }
        p1[i]=count1;
        p2[i]=count2;

    }
    for(int i=0;i<n-2;i++){
        if(p1[i]>=0){
            mini=min(mini,p2[i]);
        }
        int j=i+1;
        if(p2[j]>=mini){
            xyz=true;
            break;
        }
    }
    if(xyz==true){
        cout<<"YES"<<endl;
    }
    else{
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