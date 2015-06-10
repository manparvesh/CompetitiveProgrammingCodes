#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum,i,ct;
    string s;
    scanf("%d",&t);
    while(t--){
        cin>>s;
        sum=0;ct=0;
        for(i=0;i<s.size();i++){
            ct++;
            sum+=s[i];
        }
        sum/=ct;
        cout<<(char) sum<<"\n";
    }
    return 0;
}
