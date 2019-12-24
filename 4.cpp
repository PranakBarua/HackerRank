#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[11],sum=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;
}
