#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        total+=ar[i];
    }
    total/=2;
    sort(ar,ar+n);
    int sum=0,count=0;
    for(int i=n-1;i>=0;i--){
        sum+=ar[i];
        count++;
        if(sum>total){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
