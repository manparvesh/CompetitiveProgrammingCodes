#include <bits/stdc++.h>
using namespace std;

int a[123][123];
bool vis[123][123];
int n,m;

int dfs(int x, int y){
    vis[x][y] = true;
    if ((x+1)<=n){
        if ((!vis[x+1][y])and(a[x+1][y])){
            dfs(x+1,y);
        }
    }
    if ((x-1)>=1){
        if ((!vis[x-1][y])and(a[x-1][y])){
            dfs(x-1,y);
        }
    }
    if ((y+1)<=m){
        if ((!vis[x][y+1])and(a[x][y+1])){
            dfs(x,y+1);
        }
    }
    if ((y-1)>=1){
        if ((!vis[x][y-1])and(a[x][y-1])){
            dfs(x,y-1);
        }
    }
    if ((x+1)<=n && (y+1)<=m){
        if ((!vis[x+1][y+1])and(a[x+1][y+1])){
            dfs(x+1,y+1);
        }
    }
    if ((x+1)<=n && (y-1)>=1){
        if ((!vis[x+1][y-1])and(a[x+1][y-1])){
            dfs(x+1,y-1);
        }
    }
    if ((x-1)>=1 && (y+1)<=m){
        if ((!vis[x-1][y+1])and(a[x-1][y+1])){
            dfs(x-1,y+1);
        }
    }
    if ((x-1)>=1 && (y-1)>=1){
        if ((!vis[x-1][y-1])and(a[x-1][y-1])){
            dfs(x-1,y-1);
        }
    }
    return 0;
}

int main(){
    cin>>n>>m;
    string s;
    for (int i=1; i<=n; i++){
        cin>>s;
        for (int j=1; j<=m; j++){
            a[i][j] = s[j-1] - '0';
        }
    }
    int ans = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if ((!vis[i][j])and(a[i][j])){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<"\n";
}
