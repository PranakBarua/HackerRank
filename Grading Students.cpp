#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
            x=a[i]%5;
        if(a[i]<38)
            cout<<a[i]<<endl;
        else if(x >= 3)
            cout<<a[i]+(5-x)<<endl;
        else
            cout<<a[i]<<endl;
    }
    return 0;
}
