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
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
        return;
    }else if(__builtin_clz(a) > __builtin_clz(b)){
        cout<<"-1"<<endl;
        return;
    }
       else{
            vector<int> val;
            for(int i=0;i<31;i++){
                int x = (1 << i);
                if(x <=a &&(a&x)==0)a+= x,val.push_back(x);
            }
            for(int i=0;i<31;i++){
                int x=(1<< i);
                if(x<=a &&(b& x) == 0) val.push_back(x);
            }
            cout << val.size() <<endl;
            for(auto z : val) cout << z << ' ';
            cout <<endl;
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