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
    vector<int>arr(n,1);
    string s;
    cin>>s;
    vector<int>ans;
    vector<int>mem;
    for(int i=0;i<n;i++){
        
        if(s[i]=='1'){
            mem.push_back(i);
        }
        if(s[i]=='2'){
            if(mem.size()==0){
                ans.push_back(i);
            }else{
                ans.push_back(mem.back());
                mem.pop_back();
            }
        }
        if(s[i]=='3'){
            ans.push_back(i);
        }
    }
    sort(ans.begin(),ans.end());
    int len=n-ans.size();
    vector<int>final;
    // if(len!=0){
    //     for(int i=0;i<ans.size();i++){
    //         if(ans[i]!=i){
    //             final.push_back(i+1);

    //         }

    //     }

    // }
    int j=0;
    for(int i=0;i<n;i++){
        if(j<ans.size() && ans[j]==i){
            j++;
        }else{
            final.push_back(i+1);
        }
    }
    cout<<len<<endl;
    for(int i=0;i<len;i++){
        cout<<final[i]<<" ";
    }
    cout<<endl;
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