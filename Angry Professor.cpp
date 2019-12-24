#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,c,a[1002],i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=0)
                c++;
        }
        if(c>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
