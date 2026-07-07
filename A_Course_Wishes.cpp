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
    vector<int>a(k+2);
    for(int i=1;i<=k;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    vector<int>count(k+2,0);
    for(int i=0;i<n;i++){
        cin>>b[i];
        count[b[i]]++;
    }
    vector<int>total;
bool x=true;
while(x==true){
     x=false;
    for(int i=k;i>=1;i--){
       
        for(int j=0;j<n;j++){
            if(b[j]==i){
                if(i+1==k+1 || count[i+1]<a[i+1]){
                    count[i]--;
                    b[j]++;
                    count[b[j]]++;
                    total.push_back(j+1);
                    x=true;
                }
            }
        }
    }
}
cout<<total.size()<<endl;
for(int i=0;i<total.size();i++){
    if(i>0){
        cout<<" ";
    }
    cout<<total[i];
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