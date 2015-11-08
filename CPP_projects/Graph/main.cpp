#include <bits/stdc++.h>
using namespace std;

#define MAX_NODES 100
vector<int> adj[MAX_NODES+1];
#define INF 1e9

void addEdge(int x,int y){
    adj[x].push_back(y);
}

bool adjm[MAX_NODES+1][MAX_NODES+1];
int dis[MAX_NODES+1];

void bfs(int source){
    bool vis[MAX_NODES+1];
    for(int i=0;i<=MAX_NODES;i++){
        vis[i]=false;
        dis[i] = INF;
    }
    queue<int> nodes;
    nodes.push(source);
    dis[source]=0;
    vis[source]=true;
    while(!nodes.empty()){
        int u = nodes.front();
        nodes.pop();
        for(int i=0;i<adj[u].size();i++){
            int v = adj[u][i];
            if(!vis[v]){
                vis[v]=true;
                dis[v]=dis[u]+1;
                nodes.push(v);
            }
        }
    }
}

int main(){
    string s;
    for(int i=0;i<=MAX_NODES;i++){
        for(int j=0;j<=MAX_NODES;j++){
            adjm[i][j]=false;
        }
    }
    while(true){
        cin>>s;
        if(s[0]=='e'){
            //end
            break;
        }
        if(s[0]=='a'){
            //add
            int x,y;
            addEdge(1,2);
            addEdge(1,3);
            addEdge(1,4);
            addEdge(2,6);
            addEdge(4,5);
            addEdge(3,4);
            addEdge(3,0);

        }else if(s[0]=='o'){
            //output
            cout<<"Graph:\n";
            for(int i=1;i<=MAX_NODES;i++){
                if(adj[i].size()==0) continue;
                cout<<i<<": ";
                for(int j=0;j<adj[i].size();j++){
                    cout<<adj[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(int i=0;i<=MAX_NODES;i++){
                for(int j=0;j<MAX_NODES;j++){
                    if(adjm[i][j]){
                        cout<<i<<" "<<j<<endl;
                    }
                }
            }
        }else if(s[0]='b'){
            int source;
            cin>>source;
            bfs(source);
            for(int i=0;i<=MAX_NODES;i++){
                if(dis[i]!=INF){
                    cout<<i<<" distance from source = "<<dis[i]<<endl;
                }
            }
        }
    }
    return 0;
}
