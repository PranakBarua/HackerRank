#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  i,ln,need=4,a[6],n;
    char ch[103];
    cin>>n;
    cin>>ch;
    ln=strlen(ch);

    for(i=0;i<n;i++){
        if(ch[i]>='0' && ch[i]<='9'){
            a[0]=1;
            continue;
        }
        else if(ch[i]>='A' && ch[i]<='Z'){
            a[1]=1;
            continue;
        }
        else if(ch[i]>='a' && ch[i]<='z'){
            a[2]=1;
            continue;
        }
        else if(ch[i]=='!'||ch[i]=='@'||ch[i]=='#'||ch[i]=='%'||ch[i]=='^'||ch[i]=='&'||ch[i]=='*'|| ch[i]=='('||ch[i]==')'||ch[i]=='-'||ch[i]=='+'){
            a[3]=1;
        }
    }

    if(a[0]==1)
        need--;
    if(a[1]==1)
        need--;
    if(a[2]==1)
        need--;
    if(a[3]==1)
        need--;
    if(ln<6){
            ln=6-ln;
        if(ln>need)
            cout<<ln<<endl;
        else
            cout<<need<<endl;
    }
    else
        cout<<need<<endl;
    return 0;
}
