#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],b[1005],i,ck=0,dk=0,ek=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            ck=1;
            break;}

        if(i==(n-1))
            continue;
        if(a[i+1]-a[i]<=0)
            dk=1;
        else
            ek=1;
    }
    if(ck==1)
        cout<<"rated"<<endl;
    else{
        if(dk==1 && ek==0 )
            cout<<"maybe"<<endl;
        else
            cout<<"unrated"<<endl;
    }
    return 0;
}
