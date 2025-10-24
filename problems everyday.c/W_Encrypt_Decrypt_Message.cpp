#include <bits/stdc++.h>
using namespace std;
int main()
{


int n;
cin>>n;
string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

string arr;
cin>>arr;

if(n==1){
    for(int i=0 ;i < arr.size();i++){
        char ch=arr[i];
        for(int j=0;j<Original.size();j++){
if(ch==Original[j]){
    cout<<Key[j];
break;
}
        }

    }cout<<endl;
  

    }
    else{   
         for(int i=0 ;i < arr.size();i++){
        char ch=arr[i];
        for(int j=0;j<Key.size();j++){
if(ch==Key[j]){
    cout<<Original[j];
break;
}
        }

    }cout<<endl;
  

    }




return 0;
}