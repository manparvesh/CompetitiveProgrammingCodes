#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int ar[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n);
        int eptr=n-1,sptr=0;
        for(int i=0;i<n;i++){
            if(i&1) {
				printf("%d ", ar[eptr--]);
			} else {
				printf("%d ", ar[sptr++]);
			}
        }
        printf("\n");
    }
    return 0;
}
