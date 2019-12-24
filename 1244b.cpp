#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,j,k,l;
    char ch[1002];
    cin>>t;
    while(t--){
            k=0;
            l=0;
        cin>>n;
        cin>>ch;
        for(i=0,j=n-1;i<n;i++,j--)
        {
            if(ch[i]=='1')
            {
                k=(i+1)*2;
            }
            if(ch[j]=='1')
            {
                l=(n-j)*2;
            }
        }
        if(k==0 && l==0)
            cout<<n<<endl;
        else if(k>l)
            cout<<k<<endl;
        else
            cout<<l<<endl;

    }
    return 0;
}
