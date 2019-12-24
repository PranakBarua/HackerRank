#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sub=100,i,a[30],x;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    x=k;
    for(i=0;i<n;i++){
        if(x>=n){
            if(a[0]==1)
                sub=sub-3;
            else
                sub=sub-1;
            break;
        }
        else{
        if(a[x]==1)
            sub=sub-3;
        else
            sub=sub-1;
        }
        x=x+k;
    }
    cout<<sub<<endl;
    return 0;

}
