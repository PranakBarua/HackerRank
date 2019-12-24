#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[103],ck,i;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ck=a[n-1]-k;
    if(ck<=0)
        cout<<0<<endl;
    else
        cout<<ck<<endl;
    return 0;
}
