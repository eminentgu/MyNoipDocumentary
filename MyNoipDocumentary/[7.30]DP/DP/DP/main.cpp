#include <cstdio>
#include<iostream>
#include <cstring>
#include <queue>
using namespace std;
struct node{
    int x,y;
};
int main(){
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    int n,m;
    char x;
    int mapp[2005][2005];
    int aim_x=0,aim_y=0;
    node begin;
    queue<node>q;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>x;
            if(x=='d'){
                aim_x=i;
                aim_y=j;
                mapp[i][j]=-1;
            }
            else if(x=='m'){
                begin.x=i;
                begin.y=j;
                mapp[i][j]=0;
                q.push(begin);
            }
            else if(x=='.') mapp[i][j]=-1;
            else mapp[i][j]=-3;
        }
    }
    while(!q.empty()){
        node now;
        now=q.front();q.pop();
        if(now.x==aim_x&&now.y==aim_y) break;
        for(int i=0;i<=3;i++){
            int xx=now.x+dx[i];
            int yy=now.y+dy[i];
            if(xx>=0&&yy>=0&&xx<n&&yy<m&&mapp[xx][yy]==-1){
                node next;
                next.x=xx;
                next.y=yy;
                q.push(next);
                mapp[xx][yy]=mapp[now.x][now.y]+1;
            }
        }
    }
    cout<<mapp[aim_x][aim_y];
    return 0;
}
