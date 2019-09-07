#include <iostream>
#include <queue>
#include<cstring>
using namespace std;
int dx[8]={0,0,-1,1,-1,-1,1,1};
int dy[8]={-1,1,0,0,-1,1,1,-1};
int mapp[120][120];
int vis[120][120][9];
struct Node{
    int x,y,z;
};
int main(){
    int n,m;
    cin>>n>>m;
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>mapp[i][j];
        }
    }
    queue<Node>q;
    Node begin;
    begin.x=1;
    begin.y=1;
    begin.z=10;
    for(int i=0;i<9;i++){
        vis[1][1][i]=1;
    }
    q.push(begin);
    while(!q.empty()){
        Node now=q.front();q.pop();
        for(int i=0;i<8;i++){
            int xx=now.x+dx[i]*mapp[now.x][now.y];
            int yy=now.y+dy[i]*mapp[now.x][now.y];
            if(xx>=1&&yy>=1&&xx<=m&&yy<=n&&vis[xx][yy][i]==0&&now.z!=i){
                if(now.z==10) vis[xx][yy][i]=1;
                else
                {
                    vis[xx][yy][i]=vis[now.x][now.y][now.z]+1;
                }
                q.push({xx,yy,i});
            }
        }
    }
    int minn=1000,flag=0;
    for(int i=0;i<9;i++){
        if(vis[m][n][i]!=0){
            minn=min(minn,vis[m][n][i]);
            flag=1;
        }
    }
    if(flag) cout<<minn;
    else cout<<"NEVER";
    return 0;
}
