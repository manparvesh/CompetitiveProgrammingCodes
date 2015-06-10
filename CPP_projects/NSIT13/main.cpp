#include <bits/stdc++.h>

using namespace std;



int main()
{
    for (int i=0;i<10;i++){
        int ar[42]={0};
        int x,y=0;
        for(int j=0;j<10;j++){
            scanf("%d",&x);
            x%=42;
            ar[x]++;
        }

        for(int a=0;a<42;a++){
            if(ar[a]!=0){
                y++;
            }
        }

        cout<<y<<endl;
    }
    return 0;
}
