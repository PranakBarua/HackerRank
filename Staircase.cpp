#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
            k=n-i;
        for(j=1;j<=n;j++){
           if(j>k)
             cout<<"#";
           else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
