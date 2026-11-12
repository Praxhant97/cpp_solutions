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
void removeDuplicates(vector<int>& v) {
    sort(v.begin(), v.end());
    auto it =unique(v.begin(), v.end());
    v.erase(it, v.end());
}
vector<int> traverse(vector<int> ans, int a ,int y, int n){
    // vector<int>res;
    if(a==1){
        for(int i=0;i<ans.size();i++){
            ans[i]-=y;
            if(ans[i]<=0){
                ans[i]+=n;
            }
        }
    }else{
        for(int i=0;i<ans.size();i++){
            ans[i]+=y;
            if(ans[i]>n){
                ans[i]-=n;
            }
        }
    }
    return ans;
    
}

void solve() {
    int n,m,x;
    cin>>n>>m>>x;
    vector<int>arr(m);
    vector<char>dir(m);
    for(int i=0;i<m;i++){
        cin>>arr[i]>>dir[i];
    }
    vector<int>ans(1);
    ans[0]=x;
    for(int i=0;i<m;i++){
        // vector<int>ans1;
        vector<int> res1;
        vector<int>res2;

        if(dir[i]=='1'){
            res1=traverse(ans,1,arr[i],n);
        }
        else if( dir[i]=='0'){
            res2=traverse(ans,0,arr[i],n);
        }
        else{
            res1=traverse(ans,1,arr[i],n);
            res2=traverse(ans,0,arr[i],n);
        }
        if(res1!=res2){
        res1.insert(res1.end(),res2.begin(),res2.end());
        
        }
        removeDuplicates(res1);
        ans=res1;
        // sort(res1.begin(),res1.end());
        
    }
    // cout<<ans<<endl;
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}