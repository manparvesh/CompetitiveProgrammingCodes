#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int i;
    int q,x,y;
    scanf("%d %d",&n,&m);
    char c;
    int ch[n];
    for(i=0;i<n;i++){
        cin>>c;
        ch[i]=c-48;
    }
    for(i=0;i<m;i++){
        scanf("%d %d %d",&q,&x,&y);
        x--;
        if(q==1){
            ch[x]=y;
        }else{
            y--;
            int ans=0,sum;
            for(int a=x;a<=y;a++){
                sum=0;
                for(int b=a;b<=y;b++){
                    sum +=ch[b];
                    if(sum%3==0){
                        ans++;
                    }

                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
