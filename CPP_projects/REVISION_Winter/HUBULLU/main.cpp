#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,N,n;
    int p,q;
    int ct;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&N,&n);
        int ar[N];
        for(p=1;p<N;p++) ar[p]=1;
        for(p=2;p<N;p++){
            for(q=2;q*p<=N;q++){
                ar[p*q]=0;
            }
        }
        for(p=1;p<N;p++){
            if(ar[p])
                ct++;
        }
        if(!n){
            if(ct%2!=1){
                printf("Airborne wins.\n");
            }else{
                printf("Pagfloyd wins.\n");
            }
        }else{
            if(ct%2==1){
                printf("Airborne wins.\n");
            }else{
                printf("Pagfloyd wins.\n");
            }
        }
    }
    return 0;
}
