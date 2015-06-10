#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ar[26], vis[26];
    for(int i=0;i<26;i++){
        ar[i]=0;
    }
    for(int i=0;i<s.length();i++){
        ar[(int)(s[i]-'a')]++;
        vis[(int)(s[i]-'a')]=1;
    }
    for(int i=0;i<s.length();i++){
        if(vis[(int)(s[i]-'a')]){
            cout<<s[i]<<ar[(int)(s[i]-'a')];
            vis[(int)(s[i]-'a')]=0;
        }
    }
    cout<<endl;
    return 0;
}
