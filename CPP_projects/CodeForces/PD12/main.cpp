#include <bits/stdc++.h>
using namespace std;

char ch[211][211];
bool vis[211][211];
int m,n;

int dfs(char ch[211][211],int x,int y){
    if(!vis[x][y] && char[x][y]=='#'){
        if((x-1)>=0 ){
            dfs([x-i][y]);
        }
        if((x+1)<n){
            dfs([x+1][y]);
        }
        if((y-1)>=0){
            dfs([x][y-1]);
        }
        if((y+1)<m){
            dfs([x][y+1]);
        }
        if((x-1)>=0 && (y-1)>=0){
            dfs([x-1][y-1]);
        }
        if((x+1)<n && (y-1)>=0){
            dfs([x+1][y-1]);
        }
        if((x+1)<n && (y+1)<m){
            dfs([x+1][y+1]);
        }
        if((x-1)>=0 && (y+1)<m){
            dfs([x-1][y+1]);
        }
        vis[x][y]=true;
    }
}

int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }


    }
    return 0;
}
