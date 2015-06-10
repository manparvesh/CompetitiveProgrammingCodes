#include <bits/stdc++.h>
using namespace std;


int main() {
    int l,v1,v2,Q,q;
    scanf("%d %d %d",&l,&v1,&v2);
    scanf("%d",&Q);
    if(v2<v1){
        int tp=v2;
        v2=v1;
        v1=tp;
    }
    while(Q--){
        scanf("%d",&q);
        cout<<(double)((l-sqrt(q))/(v2-v1))<<"\n";
    }
    return 0;
}
