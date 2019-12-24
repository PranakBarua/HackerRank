#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,ln,l;
    char ch[104],ch1[102];
    cin>>n;
    cin>>ch;
    cin>>k;
    ln=strlen(ch);
    for(i=0;i<ln;i++){
        if(ch[i]>=97 && ch[i]<=122){
            l=((int)ch[i]-97)+k;
            l=l%26;
            ch1[i]=l;
        }
        else if(ch[i]>=65 && ch[i]<=90){
            l=((int)ch[i]-65)+k;
            l=l%26;
            ch1[i]=l;
        }
        else
            ch1[i]=ch[i];
    }
    cout<<ch1;
    return 0;
}
