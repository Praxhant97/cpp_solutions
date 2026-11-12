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
    string s;
    cin>>s;
    int ct1=0;
    int ct0=0;
    int lowcount=0;
    int ct2=0;
    int x=n;
    int watches=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ct0++;
        }
        else if(s[i]=='1'){
            ct1++;
        }
        else if(s[i]=='2'){
            ct2++;
        }
        if( s[i]>='0' && s[i]<='5'){
            lowcount++;
        }
    }
    // int restno=n-ct1+ct0+ctg6;
    while (4 * (watches + 1) <= n) {
        int k = watches + 1;
        int h = 0;

        if (k > ct0) {
            h = k - ct0;
        }

        if (ct0 + ct1 < k + h) {
            break;
        }

        if (lowcount< 2 * k + h) {
            break;
        }

        watches++;
    }
    // while(ct0>0 || ct1>0 || x>3){
    //     vector<int>a;
    //     if(ct0>ct1){
    //         a.push_back(0);
    //         ct0--;
    //         x--;
    //     }else{
    //         a.push_back(1);
    //         ct1--;
    //         x--;
    //     }
    //     if(a[0]==0){
    //         if(ctg6!=0){
    //             ctg6--;
    //             a.push_back(6);
    //             x--;
    //         }else if(restno!=0){
    //             a.push_back(4);
    //             x--;
    //             restno--;
    //         }else if(ct1>ct0){
    //             a.push_back(1);
    //             ct1--;
    //             x--;
    //         }else if(ct0!=0){
    //             a.push_back(0);
    //             ct0--;
    //             x--;
    //         }else{
    //             break;
    //         }
    //     }else{
    //         if(ct1!=0 || ct0!=0){
    //             if(ct1>=ct0){
    //             a.push_back(1);
    //             ct1--;
    //             x--;
    //             }else if(ct0>ct1){
    //             a.push_back(0);
    //             ct0--;
    //             x--;
    //             }
    //         }else{
    //             break;
    //         }
    //     }
    //     if(restno!=0){
    //         a.push_back(4);
    //         restno--;
    //         x--;
    //     }else if(ct1!=0){
    //         a.push_back(1);
    //         ct1--;
    //         x--;
    //     }
    //     else if(ct0!=0){
    //         a.push_back(0);
    //         x--;
    //         ct0--;
    //     }else{
    //         break;
    //     }

    //     if(ctg6!=0){
    //         a.push_back(6);
    //         ctg6--;
    //         x--;

    //     }else if(restno!=0){
    //         a.push_back(4);
    //         restno--;
    //         x--;
    //     }
    //     else if(ct1!=0){
    //         a.push_back(1);
    //         ct1--;
    //         x--;
    //     }else if(ct0!=0){
    //         a.push_back(0);
    //         ct0--;
    //         x--;
    //     }
    //     else{
    //         break;
    //     }
    //     watches++;

    // }
    cout<<watches<<endl;
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