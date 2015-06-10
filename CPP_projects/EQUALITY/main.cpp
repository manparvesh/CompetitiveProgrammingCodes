#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef long double LD;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        L nn=n-1;
        LD big=(LD)(nn-1)/nn;
        LD small=(LD)(1-big);
        //cout<<"big, small="<<big<<" "<<small<<endl<<endl;
        L a[n];
        LD sum=0.0;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum+=(LD)(a[i]*small);
            //cout<<(LD)(a[i]*small)<<endl;
        }
        if(n==1){
            cout<<a[0];
        }else{
            for(int i=0;i<n;i++){
                cout<<round(sum-a[i]*big-a[i]*small)<<" ";
            }
        }
        printf("\n");
    }
    return 0;
}
