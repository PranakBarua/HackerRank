#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,ck,m;
    cin>>t;
    while(t--){
        cin>>n;
        ck=0;
        m=n;
        while(n!=0){
            a=n%10;
            b=n/10;
            n=b;
            if(a==0)
                continue;
            if(m%a==0)
                ck++;
        }
        cout<<ck<<endl;
    }
    return 0;
}
