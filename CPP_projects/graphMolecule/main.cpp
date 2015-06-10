#include <bits/stdc++.h>
using namespace std;
const int na = 2; // put your size here

int inp[na][na];
vector<int> Al[129];
int vis[1234567];

int add_edge(int i, int j){
    Al[i].push_back(j);
    Al[j].push_back(i);
    return 0;
}

int c=0;

int dfs(int s){
    vis[s] = 1;
    c++;
    for (int i=0; i<Al[s].size(); i++){
        int v = Al[s][i];
        if (!vis[v]){
            dfs(v);
        }
    }
    return 0;
}

int main(){
    freopen("in.txt","r",stdin);
    for (int i=0; i<na; i++){
        for (int j=0; j<na; j++){
            cin>>inp[i][j];
        }
    }

    for (int i=0; i<na; i++){
        for (int j=0; j<na; j++){
            if (inp[i][j]==true){
                add_edge(i,j);
            }
        }
    }
    for (int i=0; i<na; i++){
        if (!vis[i]){
            c=0;
            dfs(i);
            cout<<c<<"\n";
        }
    }
}
