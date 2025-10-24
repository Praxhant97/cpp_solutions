#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, x, y;
    cin>>n>>x>>y;
    ll time = 0, fib= 0;
    ll l=min(x,y);
    fib=n%l;
    n=n-fib;
    time=n/l;
    if(fib!=0){
        cout<<time+1<<endl;
    }
else{
    cout<<time<<endl;}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
