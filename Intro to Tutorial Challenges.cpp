#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,a[1003],i;
    cin>>v>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==v){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
