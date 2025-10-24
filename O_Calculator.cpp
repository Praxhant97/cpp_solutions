#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
char M;
cin>>a>>M>>b;
if(M=='+')
{cout<<a+b;}
else if(M=='-'){
cout<<a-b;}
else if(M=='*')
{cout<<a*b;}
else if(M=='/')
{cout<<a/b;}
return 0;
}