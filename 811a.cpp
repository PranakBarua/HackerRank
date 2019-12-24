#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,l;
    cin>>n>>m;
    if(n>m)
        l=n;
    else
        l=m;
    for(i=1;i<=l;i++){
        if(i%2 != 0){
            n=n-i;
            if(n==0){
                if(m>=(i+1)){
                    cout<<"Vladik"<<endl;
                    break;}
                else{
                cout<<"Valera"<<endl;
                break;}
            }
            if(n<0){
                cout<<"Vladik"<<endl;
                break;
            }
        }
        else{
            m=m-i;
            if(m==0){
                    if(n>=(i+1)){
                    cout<<"Valera"<<endl;
                    break;}
            else{
                cout<<"Vladik"<<endl;
                break;
            }
            }
            if(m<0){
                cout<<"Valera"<<endl;
                break;
            }
        }
    }
    return 0;
}
