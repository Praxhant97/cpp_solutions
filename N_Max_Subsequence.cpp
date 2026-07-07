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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string arr;
    int n,t=1;
    cin>>n;
    cin>>arr;
    for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        t++;
    }

    
    }    cout<<t;
    return 0;
}