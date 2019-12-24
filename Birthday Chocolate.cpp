#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],d,m,i,j,sum,ck=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d>>m;
    n=n-m;
    for(i=0;i<=n;i++){
            sum=0;
        for(j=i;j<i+m;j++){
            sum=sum+a[j];
        }
        if(sum==d)
            ck++;
    }
    cout<<ck<<endl;
    return 0;

}
