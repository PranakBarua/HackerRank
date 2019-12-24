#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c1[10002],c2[10002],c3[10002],c4[10002];
    int i,j,n,t,k,l;
    cin>>t;
    while(t--){
            k=0;
        cin>>n;
        cin>>c1>>c2;
        for(i=0;i<n;i++){
            if(c1[i]!=c2[i]){

                c3[k]=c1[i];
                c4[k]=c2[i];
                  k++;
            }
        }
    if(k!=2){
        cout<<"No"<<endl;
    }
    else{
        if(c3[0]==c3[1]&& c4[0]==c4[1]){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    }
}
