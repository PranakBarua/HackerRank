#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int i,length;
    gets(ch);
    length=strlen(ch);
    for(i=0;ch[i]!='\0';i++){
        if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')){
            if(i==0 || ((ch[i]<'A' && ch[i]>'Z') || (ch[i]<'a' && ch[i]>'z'))){
                if(ch[i]>='a' && ch[i]<='z'){
                    ch[i]='A'+(ch[i]-'a');
                    if(i!=0)
                        cout<<endl;
                }
            }
        }
        else
            continue;
        cout<<ch[i];
    }
    cout<<endl;
    return 0;
}
