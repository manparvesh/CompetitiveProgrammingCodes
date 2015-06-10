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

int addrev(int& n){
    return n+rev(n);
}

bool isPali(int n){
    if (n==rev(n)) {return true;}
    return false;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ct=0;
        //cout<<rev(n);
        while(true){
            if(isPali(n))
                break;
            else{
                n+=rev(n);
                ct++;
            }
        }

        printf("%d %d\n",ct,n);
    }
    return 0;
}
