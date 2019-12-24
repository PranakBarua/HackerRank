#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(c>a && c>b){
            if(a>b)
                cout<<"Cat A"<<endl;
            else if(b>a)
                cout<<"Cat B"<<endl;
            else
                cout<<"Mouse C"<<endl;

            }
         else if(c<a && c<b){
            if(a>b)
                cout<<"Cat B"<<endl;
            else if(b>a)
                cout<<"Cat A"<<endl;
            else
                cout<<"Mouse C"<<endl;

            }
        else{
                if(a>b){
                if((a-c)>(c-b))
                    cout<<"Cat B"<<endl;
                if((a-c)<(c-b))
                    cout<<"Cat A"<<endl;
                else
                    cout<<"Mouse C"<<endl;
              }
              else{
                if((b-c)>(c-a))
                    cout<<"Cat A"<<endl;
                if((b-c)<(c-a))
                    cout<<"Cat B"<<endl;
                else
                    cout<<"Mouse C"<<endl;
              }
        }
    }
    return 0;
}
