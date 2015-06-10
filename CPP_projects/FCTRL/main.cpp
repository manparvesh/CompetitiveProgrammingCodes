#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        long n;
        cin>>n;
        long ct=0;
        for (long r=5;r<=n;r*=5){
                ct+=n/r;
        }
        cout<<ct<<endl;
    }
    return 0;
}
