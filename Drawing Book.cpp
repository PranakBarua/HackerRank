#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,i,a[100005],sum,sum1,j;
    cin>>n>>p;
    if(n==0 || n==p)
        cout<<0<<endl;
    else{
        i=n%2;
        j=n/2;
        if(i==0){
            if(j%2!=0)
                j++;
            if(p>=j){
                sum=n-p;
                sum1=(sum/2)+(sum%2);
            }
            else{
                sum=p-1;
                sum1=(sum/2)+(sum%2);
            }
        }
        else{
            if(j%2!=0)
                j++;
            if(p>=j){
                sum=n-p;
                sum1=(sum/2);
            }
            else{
                sum=p-1;
                sum1=(sum/2)+(sum%2);
            }
        }
        cout<<sum1<<endl;
    }
    return 0;

}
