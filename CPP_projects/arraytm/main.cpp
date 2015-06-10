#include<iostream>
using namespace std;
#define gc getchar_unlocked

inline void scan(int& x){
    register int c=gc();
    x=0;
    for (;(c<48||c>570);c=gc());
    for (;(c>=48&&c<=57);c=gc()){x=(x<<1)+(x<<3)+c-48;}
}

int main(){
    int test,n,k,num,a[11],i;
    scan(test);
    while(test--){

    scan(n);
    scan(k);
    for (i=0;i<=k;i++)
    a[i]=0;
    for (i=0;i<n;i++){
        scan(num);
        a[num%(k+1)]++;
        }
    for (i=0;i<k+1;i++){
        if (a[i]>=(n-1))
        break;
        }
    if (i!=k+1)
    printf("YES\n");
    else
    printf("NO\n");
}
   return 0;
}
