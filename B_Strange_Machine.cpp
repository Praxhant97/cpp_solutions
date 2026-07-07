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
int findtime(int x,string s,int n){
    int count=0;
    int pt=1;
    int i=0;
    while(x!=0){
        
          if(s[i]=='A'){
            x=x-1;
        }else{
            x=x/2;
        }
        count++;
        i++;
        if(i==n){
            i=0;
        }
       
    }
    return count;
    
}
void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    vector<int>arr(m);
    cin>>s;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            flag=1;
            break;
        }
    }
    if(flag==0){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<"\n";
        }
        return;
    }
    for(int i=0;i<m;i++){
        cout<<findtime(arr[i],s,n)<<"\n";

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