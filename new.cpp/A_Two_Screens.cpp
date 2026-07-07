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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        
        int n=s.size();
        int m=t.size();
        int c=0;
        
        for(int i=0;i<min(n,m);i++)
        {
         if(s[i]==t[i])
            {
            c++;
            }
            else
            {
             break;
            }
        }
        
    int ans=c+(n-c)+(m-c);
        
        if(c!=0)
        {
            ans++;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}