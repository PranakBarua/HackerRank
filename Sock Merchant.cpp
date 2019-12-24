#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[102],i,ck=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                ck++;
                i++;
            }
    }
    cout<<ck<<endl;
    return 0;
}
