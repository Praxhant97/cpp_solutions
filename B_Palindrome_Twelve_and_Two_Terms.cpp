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
// int checkpalindrome(int a){

//     int t = a;
//     int rev = 0;
//     while (t>0) {
//         int dig=t%10;
//         rev = rev*10+dig;
//         t/=10;
//     }
//     bool ispalin=false;
//     if (a==rev){
//         ispalin=true;
//     }
//     return ispalin;

// }

void solve() {

ll n;
cin>>n;
ll rem=n%12;
ll a=0;
if(rem<=9){
    a=rem;
}
else if(rem==10){
    a=22;
}
else if(rem==11){
    a=11;
}
if(a<=n){
    ll b=n-a;
    cout<<a<<" "<<b<<endl;

}else{
    cout<<"-1"<<endl;
}



    // ll n;
    // cin>>n;
    // ll a , b=0;
    // for(ll i=0;i<n;i+=12){
    //     b=i;
    //     a=n-b;
    //     bool ispalin=checkpalindrome(a);
    //     if(ispalin){
    //         cout<<a<<" "<<b<<endl;
    //         return;
    //     }
        
    // }
    
    // cout<<"-1"<<endl;
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