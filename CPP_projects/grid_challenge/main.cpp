#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            sort(s[i].begin(),s[i].end());
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(s[i][j]>s[i][j+1]){
                    flag=false;break;
                }
            }
        }
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
