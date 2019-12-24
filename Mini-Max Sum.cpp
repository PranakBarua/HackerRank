#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5],sum=0,sum1=0,i;
    for(i=0;i<5;i++)
        cin>>a[i];
    sort(a,a+5);
    for(i=0;i<5-1;i++)
        sum=sum+a[i];
    sum1=a[4]+(sum-a[0]);
    cout<<sum<<" "<<sum1<<endl;
    return 0;
}
