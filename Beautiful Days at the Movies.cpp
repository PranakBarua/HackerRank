#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,k,t,n,c=0,p,m;
    cin>>a>>b>>k;
    for(i=a;i<=b;i++){
        t=i;
        n=0;
        while(t!=0){
            j=t%10;
            p=t/10;
            n=(n*10)+j;
            t=p;
        }
        m=i-n;
        if(m<0)
            m=m*(-1);
        if(m%k==0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
