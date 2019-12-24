#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,ck=0,i;
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++){
        if(i%k==0)
            ck++;
        else if(i%l==0)
            ck++;
        else if(i%m==0)
            ck++;
        else if(i%n==0)
            ck++;
    }
    cout<<ck<<endl;
    return 0;
}
