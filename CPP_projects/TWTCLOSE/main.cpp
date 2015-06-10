#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;

    int ar[n];
    for(int a=0;a<n;a++){
       ar[a]=0;
    }
    string s;
    int i;

    while(k--){
        int sum=0;
        cin>>s;
        if(s=="CLOSEALL"){
            sum=0;
            for(int a=0;a<n;a++){
                ar[a]=0;
            }
            cout<<sum<<endl;
        }else{
            cin>>i;
            if(ar[i-1]==0){
                ar[i-1]=1;
            }else{
                ar[i-1]=0;
            }
            for(int a=0;a<n;a++){
                sum+=ar[a];
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}
