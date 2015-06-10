#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    float bal;
    scanf("%d %f",&x,&bal);
        cout << fixed;
        cout << setprecision(2);
    if(x<bal-0.5 && x%5==0){
        cout << bal-x-0.50<<endl;
    }else{
        cout << bal<<endl;
    }
    return 0;
}
