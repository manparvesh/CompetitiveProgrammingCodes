#include <bits/stdc++.h>
using namespace std;

int rev(int n){
    int temp=0;
    while(n){
        temp=(temp*10 + n%10);
        n/=10;
    }
    return temp;
}

bool isPali(int n){
    if(n==rev(n)){
        return true;
    }
    return false;
}

int main()
{

    for(int n=999;n>900;n--){
        for(int m=999;m>900;m--){
            if(isPali(n*m)){
                cout<<n*m<<endl;
                break;
            }
        }
    }

    return 0;
}
