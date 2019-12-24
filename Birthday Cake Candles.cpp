#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=1;
    int arr[100005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=n-1;i>0;i--){
        if(arr[i]==arr[i-1])
            c++;
        else
            break;
    }
    cout<<c<<endl;
    return 0;
}
