#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ck=0,sum=1;
    char a[1000003];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='D'){
            sum=sum-1;
        }
        else{
            sum=sum+1;
        }
        if(sum>ck)
            ck=sum;
    }
    cout<<ck<<endl;
    return 0;
}
