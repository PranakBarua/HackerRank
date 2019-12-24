#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[200005],ck=1,k=1,j=1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            ck++;
            if(i==(n-2)){
                if(ck>k){
                k=ck;
                ck=1;
                j=a[i];
            }
            }
        }
        else{
            if(ck>k){
                k=ck;
                ck=1;
                j=a[i];
            }
        }
    }
    cout<<j<<endl;
    return 0;
}
