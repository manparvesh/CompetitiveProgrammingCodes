#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    int min=INT_MAX;
    for(int i=0;i<n-1;i++){
        min=(min<(ar[i+1]-ar[i])?min:(ar[i+1]-ar[i]));
    }
    for(int i=0;i<n-1;i++){
        if((ar[i+1]-ar[i])==min){
            printf("%d %d ",ar[i],ar[i+1]);
        }
    }
    printf("\n");
    return 0;
}
