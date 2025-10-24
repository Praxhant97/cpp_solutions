#include<stdio.h>
int main()
{
    long long int n,i,fib[100];
    fib[1]=0;
    fib[2]=1;
    for(i=3;i<=50;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%lld",&n);
    printf("%lld\n",fib[n]);
}