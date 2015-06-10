#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(s1.length()!=s2.length()){
            printf("NO\n");
        }else{
            int ar[26]={0};
            int x=s1.length();
            for (int a=0;a<x;a++){
                ar[s1[a]-'a']++;

            }
            for (int a=0;a<x;a++){
                ar[s2[a]-'a']--;

            }

            for(int a=0;a<26;a++){
                if(ar[a]!=0){
                    printf("NO\n");
                    break;
                }
                if(a==25){
                    printf("YES\n");
                }
            }

        }
    }
    return 0;
}
