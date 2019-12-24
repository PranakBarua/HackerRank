#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    for(i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            s.erase(i-1,2);
            i=0;
        }

    }
    if(s.length()==0)
        cout<<"Empty String"<<endl;
    else
        cout<<s<<endl;
    return 0;
}
