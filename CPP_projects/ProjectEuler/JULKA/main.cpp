#include <bits/stdc++.h>
using namespace std;

int kl[111],na[111],add[111],diff[111];

int main()
{
    int n=10,i,l1,l2,addl,diffl,temp;
    string s1,s2;
    long long a,b;
    while(n--){
        cin>>s1>>s2;
        l1=s1.length();l2=s2.length();
        for(i=l1-1;i>=0;i++) kl[i]=(s1[i]-48);
        for(i=l2-1;i>=0;i++) na[i]=(s2[i]-48);
        addl=(l1>l2?l1:l2);
        temp=0;
        for(i=0;i<=addl;i++){
            add[i]=(kl[i]+na[i]+temp)%10;
            temp=(kl[i]+na[i]+temp)/10;
        }
        for(i=0;i<=addl;i++) cout<<add[i];
    }
    return 0;
}

