#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,sum,res,avg;
    while(1){
        scanf("%d",&t);
        if(t==-1){
            break;
        }else{
            int ar[t];
            sum=0;
            for(i=0;i<t;i++) cin>>ar[i];
            for(i=0;i<t;i++) sum+=ar[i];
            if((sum%t)!=0){
                res=-1;
            }else{
                avg=sum/t;
                res=0;
                for(i=0;i<t;i++) res+=(abs(avg-ar[i]));
            }
            cout<<((res==-1)?-1:res/2)<<endl;
        }
    }
    return 0;
}
