#include <bits/stdc++.h>
using namespace std;

/*
I=1 means all coins are showing Head in the start of the game, and I=2 means all coins
are showing Tail in the start of the game.
*/

int main()
{
    int t,g,i,n,q,I,J,ct;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&g);
        while(g--){
            scanf("%d %d %d",&i,&n,&q);
            if(n%2==0){
                printf("%d\n",n/2);
            }else{
                if(i==q){
                    printf("%d\n",n/2);
                }else{
                    printf("%d\n",n/2+1);
                }
            }
        }
    }
    return 0;
}
/*Q=1 means Elephant needs to guess
the total number of coins showing Head in the end of the game, and Q=2
means Elephant needs to guess the total number of coins showing Tail in the end of the game.*/
