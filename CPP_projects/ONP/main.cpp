#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string str;
        cin>>str;
        string s;

        for (int a=0;a<str.length();a++){
            if(str[a]=='('){
                while (str[a+1]!=')'){
                    s+=str[a+1];
                }
            }
        }

        cout<<s;
    }
    return 0;
}
