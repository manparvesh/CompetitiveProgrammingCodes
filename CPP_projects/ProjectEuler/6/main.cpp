#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sum1=0,sum2,s=0;
    for(int i=1;i<=100;i++) sum1+=(i*i);
    for(int i=1;i<=100;i++) s+=i;
    sum2=s*s;
    cout<<sum2-sum1<<endl;
    return 0;
}
