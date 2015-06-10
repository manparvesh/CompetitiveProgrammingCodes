#include <bits/stdc++.h>
using namespace std;

int rev(int& b){
    int rem=0,n=b;
    for (int a=0;n>0;a++){
        rem=10*rem+n%10;
        n/=10;
    }
    return rem;
}

bool isPali(int n){
    if (n==rev(n)) {return true;}
    return false;
}

int main()
{
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int out=n+1;

        for(out;out<=99999;out++){
            if(isPali(out)){
                break;
            }
        }

        printf("%d\n",out);
    }
    return 0;
}
