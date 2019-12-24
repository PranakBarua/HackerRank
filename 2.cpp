#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a[1005],i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;
}
