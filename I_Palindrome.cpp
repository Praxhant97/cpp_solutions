#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,r,rev=0,x;
cin>>n;
x=n;
for(;n>0;n/=10){
    rev=rev*10+n%10;

}
// cout<<rev<<endl;
// cout<<x<<endl;

if(rev==x){
    cout<<rev<<"\nYES";
   } else{
        cout<<rev<<"\nNO";
}

return 0;

}



