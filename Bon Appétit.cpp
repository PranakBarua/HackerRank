#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100003],k,b,sum=0,j,sum1,i;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cin>>b;
    sum1=sum-a[k];
    sum1=sum1/2;
    j=sum/2;
    if(sum1==b)
        cout<<"Bon Appetit"<<endl;
    else{
        j=j-sum1;
        cout<<j<<endl;
    }
    return 0;

}
