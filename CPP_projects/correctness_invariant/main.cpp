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
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    return 0;
}
