#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{int c=0,i;


for(i=1;i<=n;i++)
{
if(n%i==0)
{
    c++;
}

}if(c==2){
    return true;
}else{
return false;
}



}
int main()
{int n;
cin>>n;
for(int i=1;i<=n ;i++)
{
if(isprime(i)){
    cout<<i<<" ";
}

}


return 0;
}