#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r,a[1000],b[1000],i,j,k=0;
    cin>>n>>p>>q;
    for(i=0;i<p;i++)
        cin>>a[i];
    for(i=0;i<q;i++)
        cin>>b[i];

   for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        r=a[i]+b[j];
        if(r>n)
            continue;
        if(r>k)
            k=r;
    }
   }
   if(k==0)
   cout<<-1<<endl;
   else
   cout<<k<<endl;
    return 0;
}
