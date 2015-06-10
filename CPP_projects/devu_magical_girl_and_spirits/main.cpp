#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int pos,strength;
    bool didit,haspower=true;
    scanf("%d",&t);
    while(t--){
        pos=0;strength=0;
        didit=true;
        haspower=true;
        scanf("%d",&n);
        int spirit[n];
        for(int i=0;i<n;i++){
            scanf("%d",&spirit[i]);
        }
        for(int i=0;i<n;i++){
            pos++;
            if(strength+spirit[i]>=0){
                strength+=spirit[i];
                cout<<"spirit= "<<spirit<<endl;
                cout<<"strength= "<<strength<<endl;
            }else if(haspower){
                strength-=spirit[i];
                cout<<"spirit= "<<spirit<<endl;
                cout<<"haspower"<<endl;
                cout<<"strength= "<<strength<<endl;
                haspower=false;
            }else{
                cout<<"spirit= "<<spirit<<endl;
                cout<<"doesn't have power anymore"<<endl;
                didit=false;
                break;
            }
        }
        if(didit){
            printf("She did it!\n");
        }else{
            printf("%d\n",pos);
        }
    }
    return 0;
}
