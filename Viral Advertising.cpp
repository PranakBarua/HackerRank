#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    i=5;
    while(n--){
            i=i/2;
        sum=sum+i;
        i=i*3;
    }
    cout<<sum<<endl;
    return 0;
}
