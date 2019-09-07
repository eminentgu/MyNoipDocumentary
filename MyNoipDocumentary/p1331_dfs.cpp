#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int ans=0;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
int a,b;
char mapp[1005][1005];
void dfs(int x,int y){
    mapp[x][y]='.';
    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx<=a&&yy<=b&&mapp[xx][yy]=='#'&&xx>=0&&yy>=0){
            dfs(xx,yy);
        }
    }
}

int main(){
    int temp=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mapp[i][j];
        }
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<b-1;j++){
            temp=0;
            if(mapp[i][j]=='#') temp++;
            if(mapp[i+1][j]=='#') temp++;
            if(mapp[i][j+1]=='#') temp++;
            if(mapp[i+1][j+1]=='#') temp++;
            if(temp==3) {
                cout<<"Bad placement.";
                return 0;
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(mapp[i][j]=='#') {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<"There are "<<ans<<" ships.";
    return 0;
}
