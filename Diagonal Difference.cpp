#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10005],s=0,s1=0,s2,i,j,m;
    cin>>n;
    m=n*n;
    for(i=0;i<m;i++){
        cin>>a[i];
    }

    for(i=0;i<m;i=i+(n+1))
       s=s+a[i];

    for(i=0,j=(n-1);i<n;i++,j=j+(n-1))
       s1=s1+a[j];
    s2=s1-s;
    if(s2<0)
        s2=s2*(-1);
    cout<<s2<<endl;
    return 0;
}
