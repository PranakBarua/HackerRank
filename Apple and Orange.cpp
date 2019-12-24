#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,i,j,ar[100005],ar1[100005],c=0,x,d=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(i=0;i<m;i++){
            cin>>ar[i];
        if(ar[i]>0){
            x=a+ar[i];
            if(x>=s && x<=t)
                c++;
        }
    }
    for(i=0;i<n;i++){
        cin>>ar1[i];
        if(ar1[i]<0){
            x=b+ar1[i];
            if(x>=s && x<=t)
                d++;
        }
    }
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
