#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int space=n-1;
for(int i=1;i<=n;i++ )
{
for(int j=1;j<=space;j++)
{
cout<<" ";
}space--;
for(int s=1; s<=2*i-1;s++)
{
    cout<<"*";
}
cout<<endl;

}space=0;
for(int i=n;i>=1;i-- )
{
for(int j=1;j<=space;j++)
{
cout<<" ";
}space++;
for(int s=1; s<=2*i-1;s++)
{
    cout<<"*";
}
cout<<endl;

}

return 0;

}