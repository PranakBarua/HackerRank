#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1003],ck,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j>0;j--){
             if(a[j]<a[j-1]){
                ck=a[j];
                a[j]=a[j-1];
                a[j-1]=ck;
                count++;
             }
        }
    }
    cout<<count<<endl;
    return 0;

}
