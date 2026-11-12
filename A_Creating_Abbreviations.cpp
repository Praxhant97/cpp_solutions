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
    int k;
    cin>>k;
    vector<string> xyz(n);
    vector<string> abc(k);
    vector<bool>available(26,false);
    string s;
    string a;
    for(int i=0;i<n;i++){
        cin>>xyz[i];
        s.push_back(xyz[i][0]);

    }
    for(int i=0;i<k;i++){
        cin>>abc[i];
    }
    for(int i=0;i<k;i++){
        a+=abc[i];
    }
    // sort(a.begin(),a.end());
    // for(int i=0;i<a.size()-1;i++){
    //     if(a[i]==a[i+1]){
    //         a.erase(i+1);
    //     }
    // }
    for(int i=0;i<a.size();i++){
        bool flag=false;
        for(int j=0;j<s.size();j++){
            if(toupper(s[j])==a[i]){
                flag=true;
                break;
            }
            

            }
            if(flag==false){
                
                cout<<"NO"<<endl;
                return;
        }
        
    }
    cout<<"YES"<<endl;
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