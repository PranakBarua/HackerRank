#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,a[30],j,ck;
    char ch[30];
    for(i=0;i<26;i++)
        cin>>a[i];
    cin>>ch;
    j=strlen(ch);
    for(i=0;i<j;i++){
        ck=int(ch[i])-97;
        if(a[ck]>sum)
        sum=a[ck];
    }
    sum=j*sum;
    cout<<sum<<endl;
}
