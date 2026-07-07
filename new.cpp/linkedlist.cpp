#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n;
struct emp
{
int empno;
struct emp *next;
};
typedef struct emp node;
node *head,*tail;
void input(node *p)
{
    cout<<"\n enter emp no.";
    cin>>p->empno;
    p->next=NULL;
}
void myadd()
{
    node *t;
    t=new node;
    input(t);
    if(head==NULL)
head=t;
else
tail->next=t;
tail=t;
}

void mylist()
{
if(head==NULL)
{
cout<<"\n empty";
return;
}   
node *t;
for(t=head;t!=NULL;t=t->next)
cout<<t->empno<<" ";


}
void finddel()
{
if(head==NULL)
{

    cout<<"\n empty";
    return;
    
}



}





