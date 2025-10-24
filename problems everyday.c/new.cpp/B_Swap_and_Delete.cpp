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

void solve(){
    string s; 
    cin >> s;
    if(sz(s)==1){
        cout << 1 <<endl;
        return;
    }
    s = '#'+s;
    //cout << s<< ndl;;
    int on=0,ze=0;
    for(int i=1; i<sz(s); i++){
        if(s[i]=='0') ze++;
        else on++;
    }
    if(on==0 or ze==0){
        cout << sz(s)-1 << endl;
        return;
    }
    if(ze==on){
        cout << 0 << endl;
        return;
    }
    else if(ze<on){
        bool ok=false;
        for(int i=1; i<sz(s); i++){
            if(s[i]=='1') ze--;
            if(ze==0){
                int j;
                for(j=i+1; j<sz(s); j++){
                    if(s[j]=='1') {
                        j--;
                        break;
                    }
                }
                cout << sz(s)-j-1 << endl;
                return;
            }
        }
    }
    else{
        for(int i=1; i<sz(s); i++){
            if(s[i]=='0') on--;
            if(on==0){
                int j;
                for(j=i+1; j<sz(s); j++){
                    if(s[j]=='0') {
                        j--;
                        break;
                    }
                }
                cout << sz(s)-j-1 << endl;
                return;
            }
        }
    }
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