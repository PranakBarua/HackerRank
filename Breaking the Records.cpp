#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1003],i,sum=0,sum1=0,k,k1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    k=a[0];
    k1=a[0];
    for(i=1;i<n;i++){
        if(a[i]>k){
            sum=sum+1;
            k=a[i];
        }
        if(a[i]<k1){
             sum1=sum1+1;
             k1=a[i];
        }
    }
    cout<<sum<<" "<<sum1<<endl;
    return 0;
}
