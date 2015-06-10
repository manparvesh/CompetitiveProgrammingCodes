#include <bits/stdc++.h>
using namespace std;

int ans,n,ar[112345];
int b[112345];
vector<int> v;

void bitadd(){
    int carry=1;
    for(int i=0;i<n;i++){
        b[i]+=(carry);
        b[i]%=2;
        if(b[i]){
            break;
        }

    }
    /*for(int i=n-1;i>=0;i--){
        cout<<b[i]<<" ";  working fine!
    }
    cout<<endl;*/
}

bool done(){
    for(int i=0;i<n;i++){
        if(!b[i]){
            return false;
        }
    }
    return true;
}

int diff(){
    int mn=100000000,mx=0;
    for(int i=0;i<v.size();i++){
        mx=(mx>v[i]?mx:v[i]);
        mn=(mn<v[i]?mn:v[i]);
    }
    //cout<<"max= "<<mx<<" min= "<<mn<<endl;
    return mx-mn;
}

void vecadd(){
    v.clear();
    for(int i=0;i<n;i++){
        if(b[i]){
            v.push_back(ar[i]);
    //        cout<<ar[i]<<" ";
        }
    }
   // cout<<endl;
   // cout<<"diff= "<<diff()<<endl;
    ans+=diff(
              );
}

int main()
{
    int t;
    scanf("%d",&t);
    //int n;
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        for(int i=0;i<=n;i++){
            b[i]=0;
        }
        ans=0;
        while(!done()){
            bitadd();
            vecadd();
        }
        printf("%d\n",ans);
    }
    return 0;
}
