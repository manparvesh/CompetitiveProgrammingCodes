#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string s;
    while(t--){
        cin>>s;
        int l=s.length();
        int a1[26],a2[26];
        string ans="YES\n";
        if(l>1){
            for(int i=0;i<26;i++){
                a1[i]=0;a2[i]=0;
            }
            for(int i=0;i<l/2;i++){
                a1[(int) s[i]-'a']++;
//                cout<<s[i]<<" ";
            }
    //        cout<<endl;
            for(int i=(l%2==0?l/2:l/2+1);i<l;i++){
                a2[(int) s[i]-'a']++;
  //              cout<<s[i]<<" ";
            }
      //      cout<<endl;
            for(int i=0;i<26;i++){
                if(a1[i]!=a2[i]){
                    ans="NO\n";break;
                }
            }
        }
        cout<<ans;
    }
    return 0;
}
