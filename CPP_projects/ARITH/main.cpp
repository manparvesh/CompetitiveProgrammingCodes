#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string s;
    int a,b;
    while(t--){
        cin>>s;
        a=b=0;
        int i;
        for(i=0;i<s.length();i++){
            if((s[i]=='*' || s[i]=='-' || s[i]=='+')){
                break;
            }
            a=a*10 + (s[i]-'0');
        }
        for(i=i+1;i<s.length();i++){
            b=b*10 + (s[i]-'0');
        }
        cout<<"a= "<<a<<" b= "<<b<<endl;//we need arrays. large input!!
    }
    return 0;
}
