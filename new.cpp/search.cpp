#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   // cin>>n>>m;
   n=22;
   m=11;
char arr[n]={'a','a','a','d','d','d','k','k','y','y','b','p','p','g','g'};
char arr2[m]={'a','a','a','k','y','a','b','p','g'};
bool matched=false;
for(int j=0;j<m;j++){
   for(int i=0;i<n;i++){
      if(arr2[j]==arr[i]){
         if(j==m-1){
            matched=true;
            
         }
         i++;j++;
         
      }
      else{
         j++;
      }
   }
}
if(matched==true){
   cout<<"String was found";
}
else{
   cout<<"String was not FOund"<<endl;
}





   return 0;
}