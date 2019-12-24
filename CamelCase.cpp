#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100003];
    int i,ln,c=0;
    gets(ch);
    ln=strlen(ch);
    for(i=0;i<=ln;i++){
        if(ch[i]>='A' && ch[i]<='Z')
            c++;
    }
    cout<<c+1<<endl;
    return 0;
}
