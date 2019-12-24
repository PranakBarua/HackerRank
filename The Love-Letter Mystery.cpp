#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[10003];
    int middle,n,i,j,d,e,sum,k;
    cin>>n;
    while(n--){
            sum=0;
        cin>>c;
        middle=strlen(c);
        for(i=0,j=middle-1;i<middle/2;i++,j--){
            d=c[i];
            e=c[j];
            if(d>e)
                k=d-e;
            else
                k=e-d;
            sum=sum+k;
        }


       cout<<sum<<endl;
    }
    return 0;
}
