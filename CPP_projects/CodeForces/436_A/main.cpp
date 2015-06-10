#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;//no. of sweets, initial height of jump
    int t,h,m;//type,height,mass
    int ct=0;
    scanf("%d %d",&n,&x);
    scanf("%d %d %d",&t,&h,&m);
    int temptype;
    if(h<=x){
        ct++;
        x+=m;
        temptype=t;
        cout<<"temptype: "<<temptype<<" jump! "<<"jumpcap: "<<x<<endl;
    }else{temptype=3;}
    n--;
    while(n--){
        scanf("%d %d %d",&t,&h,&m);
        if(t!=temptype){
            if(h<=x){
                ct++;
                x+=m;
                temptype=t;
                cout<<"Jump!"<<endl;
            }
        }
        cout<<"temptype: "<<temptype<<"jumpcap: "<<x<<endl;
    }
    printf("%d\n",ct);
    return 0;
}
