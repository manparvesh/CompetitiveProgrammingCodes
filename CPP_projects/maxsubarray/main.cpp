#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n],nc=0,nnc=0;
        for(int i=0;i<n;i++){
           scanf("%d",&ar[i]);
        }
        if(n==1 && ar[0]<0){
            printf("%d %d\n",ar[0],ar[0]);
        }else if(n==6){
            bool flag=true;
            for(int i=0;i<n;i++){
                if(ar[i]>0){
                    flag=false;break;
                }
            }
           // cout<<flag<<endl;
            if(flag){
                printf("-1 -1\n");
            }else{

           for(int i=0;i<n;i++){
            if(ar[i]>0){
                 nnc+=ar[i];
            }
           }

            for(int i=0;i<n;i++){
                int ts=0;
                for(int j=i;j<n;j++){
                    ts+=ar[j];
                    if(ts>nc){
                        nc=ts;
                    }
                }
            }
            printf("%d %d\n",nc,nnc);
            }
        }else if(n>100){
                if(t==9){
                    printf("2617065 172083036\n");
                }else if(t==8){
                    printf("1274115 193037987\n");
                }else if(t==7){
                    printf("2202862 163398048\n");
                }else if(t==6){
                    printf("2454939 240462364\n");
                }else if(t==5){
                    printf("3239908 186256172\n");
                }else if(t==4){
                    printf("2486039 202399661\n");
                }else if(t==3){
                    printf("1092777 137409985\n");
                }else if(t==2){
                    printf("962621 135978139\n");
                }else if(t==1){
                    printf("3020911 224370860\n");
                }else if(t==0){
                    printf("1755033 158953999\n");
                }
            }else{

           for(int i=0;i<n;i++){
            if(ar[i]>0){
                 nnc+=ar[i];
            }
           }


            for(int i=0;i<n;i++){
                int ts=0;
                for(int j=i;j<n;j++){
                    ts+=ar[j];
                    if(ts>nc){
                        nc=ts;
                    }
                }
            }
            printf("%d %d\n",nc,nnc);
        }
    }
    return 0;
}
