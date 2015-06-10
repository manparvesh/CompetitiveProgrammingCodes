#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string a,b;
        cin>>a>>b;

        int sa=a.length(),sb=b.length();

        int res=0;
        if(sa>=sb){
            for(int c=0;c<=(sa-sb);c++){
                if(a.substr(c,sb)==b){
                    res=1;
                    break;
                }
            }
        }

        printf("%d\n",res);
    }
    return 0;
}
