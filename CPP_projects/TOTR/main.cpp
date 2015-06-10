#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string str,s;
    cin>>str;
    char STR[str.length()];
    for(int i=0;i<str.length();i++){
        STR[i]=toupper(str[i]);
    }
    while(t--){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                printf("%c",str[(int)s[i]-'a']);
            }else if(s[i]>='A' && s[i]<='Z'){
                printf("%c",STR[(int)s[i]-'A']);
            }else if(s[i]=='_'){
                printf(" ");
            }else{
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
