#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a[52];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(a[j]==i+1){
                    j=j+1;
                    break;
                }
        }
        for(k=0;k<n;k++){
                if(a[k]==j){
                    k=k+1;
                    break;
                }
        }
        cout<<k<<endl;
    }
    return 0;
}
