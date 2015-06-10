#include <bits/stdc++.h>
using namespace std;
char a[123][123];

int main()
{
    int t;
    //scanf("%d",&t);
    int xx[10];
    memset(xx,127,sizeof(xx));
    for (int i=0; i<10; i++){
        cout<<xx[i]<<"\n";
    }
    int n,m;
    cin>>n>>m;
    cout<<(n xor m)<<"\n";
    cout<<(n^m)<<"\n";
    string s;
    for (int i=0; i<n; i++){
        cin>>s;
        for (int j=0; j<m; j++){
            a[i][j] = s[j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
