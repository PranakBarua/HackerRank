#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3],s=0,s1=0,i;
    for(i=0;i<3;i++)
        cin>>a[i];
    for(i=0;i<3;i++)
        cin>>b[i];
    for(i=0;i<3;i++){
        if(a[i]>b[i])
            s++;
        else if(a[i]<b[i])
            s1++;
    }
    cout<<s<<" "<<s1<<endl;
    return 0;

}
