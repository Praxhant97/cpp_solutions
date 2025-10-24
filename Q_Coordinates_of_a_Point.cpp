#include <bits/stdc++.h>
using namespace std;
int main()
{
float a,b;
cin>>a>>b;
if(a==0.0 && b==0.0)
{
        cout<<"Origem";
}
else 
if(a==0.0)
{
    cout<<"Eixo Y";
}
else 
if(b==0.0)
{
    cout<<"Eixo X";
}
else 
if(a>0.0 &&  b>0.0){
    cout<<"Q1";
}else
 if(a>0.0 && b<0.0){
    cout<<"Q4";
}else
 if(a<0.0 && b<0.0){
    cout<<"Q3";
}else 
if(a<0.0 && b>0.0){
    cout<<"Q2";
}


if(a>0){
    if(b==0){
        cout<<"Eixo X"<<endl;
    }
    else if(b>0){
        cout<<"Q1"<<endl;
    }
    else if(b<0){
        cout<<"Q4"<<endl;
    }


return 0;
}