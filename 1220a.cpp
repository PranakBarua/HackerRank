#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,i,l,m;
    char ch[100002];
    cin>>n;
    cin>>ch;
    for(i=0;i<n;i++){
        if(ch[i]=='n')
            k++;
    }
    l=(n-(k*3))/4;
    m=k+l;
    for(i=1;i<=m;i++){
        if(i<=k){
            cout<<1<<" ";
        }
        else
            cout<<0<<" ";
    }
    cout<<endl;
    return 0;
}
