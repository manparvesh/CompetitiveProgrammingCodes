#include <bits/stdc++.h>
using namespace std;

bool isPali(string s){
    bool ret=true;
    int mid=s.length()/2;
    for(int i=0;i<mid;i++){
        if(s[i]!=s[s.length()-1-i]){
            ret=false;break;
        }
    }
    return ret;
}

int main()
{
    int t;
    scanf("%d",&t);
    string s;
    while(t--){
        cin>>s;
        if(isPali(s)){
            cout<<"-1\n";
        }else{
            int mid=s.length();
            for(int i=0;i<mid;i++){
                if(s[i]!=s[s.length()-i-1]){
                    if(s[i]==s[s.length()-i-2]){
                        cout<<(s.length()-i-1)<<"\n";break;
                    }else{
                        cout<<i<<"\n";break;
                    }
                }
            }
        }
    }
    return 0;
}
