#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[12],b[12],i,j,c[200],k=0,x,y,ck=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    x=a[n-1];
    y=b[0];
    for(i=x;i<=y;i+=x){
        for(j=0;j<n;j++){
            if(i%a[j] != 0)
                break;
        }
        if(j==n){
            c[k]=i;
        k++;
        }
    }
       for(i=0;i<k;i++){
        for(j=0;j<m;j++){
            if(b[j]%c[i] != 0)
                break;
        }
        if(j==m)
            ck++;
       }
       cout<<ck<<endl;
    return 0;
}
