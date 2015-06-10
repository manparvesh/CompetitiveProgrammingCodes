#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    long b,w,x,y,z;
    while(t--){
        cin>>b>>w>>x>>y>>z;
        if(x==y){
            cout<<(b*x+w*y)<<endl;
        }else{
            if((x+z)<y){
                cout<<(x*b + (x+z)*w)<<endl;
            }else if((y+z)<x){
                cout<<((y+z)*b + y*w)<<endl;
            }else{
                cout<<(b*x+w*y)<<endl;
            }
        }
    }
    return 0;
}
