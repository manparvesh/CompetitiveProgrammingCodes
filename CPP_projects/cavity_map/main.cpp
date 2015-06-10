#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    if(n<=2){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ar[i][j];
            }
            cout<<endl;
        }
    }else{
        for(int i=1;i<n-1;i++){
            for(int j=1;j<n-1;j++){
                if(ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i][j-1] &&
                   ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i][j+1]){
                    ar[i][j]='X';
                   }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ar[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
