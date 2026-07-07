#include <bits/stdc++.h>
#define ll  long long
#define vi   vector<ll>
#define pi  pair<ll,ll>


using namespace std;
ll sum(ll n)
{
    return n*(n+1)/2;
}
void solve()
{
    ll n,a,b;cin>>n>>a>>b;
    if(a>=b)
        cout<<n*a<<endl;
    else
    {
        ll k=b-a;
        if(k>n)
            k=n;
        ll lastModified=b-k+1,profit=sum(b)-sum(lastModified-1);
        profit+=(n-k)*a;
        cout<<profit<<endl;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {solve();
    }
}