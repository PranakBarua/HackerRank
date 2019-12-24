#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,v1,v2,sum,sum1;
    cin>>x1>>v1>>x2>>v2;
    sum=x1;
    sum1=x2;
    while(1){
        sum=sum+v1;
        sum1=sum1+v2;
        if(sum==sum1){
            cout<<"YES"<<endl;
            break;
        }
        if(v1>v2){
            if(sum>sum1){
                cout<<"NO"<<endl;
                break;
            }
        }
        else{
            if(sum<sum1){
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}
