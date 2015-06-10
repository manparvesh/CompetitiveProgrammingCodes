#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=1;
    sort(s.begin(),s.end());
    do{
        cout<<c<<" "<<s<<endl;
        c++;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}
