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

 void solve()
{
    ll n;cin>>n;

 vector<int>v;
    int x;
  for(ll i=0;i<n;i++)
    {
        cin>>x;
        if(!(i%2))
            v.pb(x);
    }
    cout<<*max_element(all(v))<<endl;
}
int main()
{

    ll t=1;
    cin>>t;
    while (t--){solve();}
  
}