#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,ans;
    scanf("%d",&t);
    double avg;
    while(t--){
        cin>>avg;
        ans=1;
        while(1){
            if((avg*ans)==((int)(avg*ans))){
                break;
            }else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
