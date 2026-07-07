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
  int m,b,a,c;
  cin>>m>>a>>b>>c;
  int ma=m,mb=m;
  int ans=0;
  if(a<=ma){
    ans+=a;
    ma=ma-a;
  }
  else{
    ans+=min(ma,a);
    ma=0;
  }
  if(b<=mb){
    ans+=b;
    mb=mb-b;
  }
  else{
    ans+=min(mb,b);
    mb=0;
  }
int left=ma+mb;
if(c<=left)
ans+=c;
else 
ans+=min(left,c);
cout<<ans<<endl;
    return 0;
}