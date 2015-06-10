#include <bits/stdc++.h>
using namespace std;

int join(int i,int j,int mid){
    return (i*10000+mid+j);
}

int main()
{
    int t,temp,res,finl,i,j;
    int n,mid,n1,n2,cost;
    bool flag;
    scanf("%d",&t);
    while(t--){
        flag=false;
        scanf("%d",&n);
        scanf("%d",&temp);
        mid=temp*1000;
        scanf("%d",&temp);
        mid+=(temp*100);
        scanf("%d",&temp);
        mid+=(temp*10);
        for(i=9;i>=0;i--){
            for(j=9;j>=0;j--){
                res=join(i,j,mid);
                //cout<<"res= "<<res<<endl;
              //  cout<<"res%n= "<<res%n<<endl;
                if(!flag){
                    if(res%n==0){
                        finl=res;
                        n1=i;n2=j;
                        cost=finl/n;
                        flag=true;
                    }
                }
            }
        }
        if(i==-1 && j==-1 && !flag){
            printf("0\n");
        }else{
            printf("%d %d %d\n",n1,n2,cost);
        }
    }
    return 0;
}
