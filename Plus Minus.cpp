#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],p=0,q=0,r=0,i;
    double x,y,z;
    cin>>n;
    for(i=0;i<n;i++){
            cin>>a[i];
        if(a[i]>0)
           p++;
        else if(a[i]<0)
           q++;
        else
            r++;
    }
    x=(double)p/(double)n;
    y=(double)q/(double)n;
    z=(double)r/(double)n;
    printf("%.6lf \n%.6lf \n%.6lf \n",x,y,z);
    return 0;

}
