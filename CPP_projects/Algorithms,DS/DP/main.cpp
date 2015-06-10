#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[100000];
    long long sum=0;
    srand(time(NULL));
    cout<<rand()%100;
    for(int i=0;i<100000;i++) ar[i]=(rand());
    for(int i=1;i<100000;i++) ar[i]+=ar[i-1];
    return 0;
}
