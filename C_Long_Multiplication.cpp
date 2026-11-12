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
    string a,b;
    cin>>a>>b;

    int n=a.size();
    bool different = false;

    for(int i=0;i<n;i++){
        if(!different){
             if(a[i]!=b[i]){
                if (a[i]<b[i]) {
                    swap(a[i],b[i]);
                }
                different=true;;
            }
        }
        // if (different==false) {
        //     if (a[i] < b[i]) {
        //         swap(a[i], b[i]);
        //     }
        //     different=true;
        else{
            if(a[i]>b[i]) {
                swap(a[i], b[i]);
            }
        }
    }

    cout<<a<<endl;
    cout<<b<<endl;
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