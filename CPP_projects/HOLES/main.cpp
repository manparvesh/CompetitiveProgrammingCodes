#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int c=0;
        string s;
        cin>>s;
        for(int a=0;a<s.length();a++){
            if(s[a]=='A'||s[a]=='D'||s[a]=='O'||s[a]=='P'||s[a]=='R'||s[a]=='Q'){
                c++;
            }else if(s[a]=='B'){
                c+=2;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
