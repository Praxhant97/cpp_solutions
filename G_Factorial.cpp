#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i;
cin>>t;
while(t--)
{int n;
cin>>n;
long long int ans=1;
for(i=1;i<=n;i++)
{
ans=ans*i;
}
cout<<ans<<endl;


}


return 0;



}