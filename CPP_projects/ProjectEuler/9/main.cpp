#include <bits/stdc++.h>
using namespace std;

bool isTrip(int a,int b,int c){
    if(c==hypot(a,b)){
        return true;
    }
    return false;
}

bool isSum(int a,int b,int c){
    if((a+b+c)==1000){
        return true;
    }
    return false;
}

int main()
{
    for(int a=10;a<1000;a++){
        for(int b=10;b<1000;b++){
            for(int c=10;c<1000;c++){
                if(isSum(a,b,c) && isTrip(a,b,c)){
                    cout<<a*b*c<<endl;
                }
            }
        }
    }
    return 0;
}
