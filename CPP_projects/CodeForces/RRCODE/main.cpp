#include <bits/stdc++.h>
using namespace std;

int ar[1234];

int main()
{
    int t,n,k,i,j,ans;
    string op;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&k,&ans);
        for(i=0;i<n;i++) scanf("%d",&ar[i]);
        cin>>op;
        if(k==0){

        }else{
            if(op[0]=='X'){
                //for(i=0;i<k;i++){
                    if(k%2!=0){
                        for(j=0;j<n;j++){
                            ans=(ans^ar[j]);
                        }
                    }
                //}
            }else if(op[0]=='A'){
                //for(i=0;i<k;i++){
                    for(j=0;j<n;j++){
                        ans=(ans&ar[j]);
                    }
                //}
            }else{
                //for(i=0;i<k;i++){
                    for(j=0;j<n;j++){
                        ans=(ans | ar[j]);
                    }
                //}
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
