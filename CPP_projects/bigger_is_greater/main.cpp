#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string s;
    while(t--){
        cin>>s;
        if(next_permutation(s.begin(),s.end())){
            cout<<s<<"\n";
        }else{
            cout<<"no answer\n";
        }
    }
    return 0;
}
