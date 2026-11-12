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
    string s;
    cin>>s;
    int sum=0;
    vector<int>a;
    for(int i=0;i<s.size();i++){
        int x = s[i] - '0';
        sum+=x;
        if(i==0){
            a.push_back(x-1);
        }else{
            a.push_back(x);
        }
    }
    
    // sort(s.begin()+1,s.end());
    sort(a.begin(),a.end());
    int n=s.size();
    if(sum<10){
        cout<<"0"<<endl;
        return;
    }
    sort(s.rbegin(),s.rend());
    int count=0;
    // for(int i=0;i<n;i++){
    //     sum-=s[i];
    //     count++;
    //     if(sum<10){
    //         cout<<count<<endl;
    //         return;
    //     }

    // }
    while(sum>9){
        sum-=a.back();
        a.pop_back();
        count+=1;
    }
    cout<<count<<endl;
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