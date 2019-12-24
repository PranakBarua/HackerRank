#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[62],t,i,sum=1;
    a[0]=1;
    for(i=1;i<60;i++){
        if(i%2==0){
            sum=sum+1;
            a[i]=sum;
        }
        else{
            sum=sum*2;
            a[i]=sum;
        }

    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
