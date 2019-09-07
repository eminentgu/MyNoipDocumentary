#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int dx[10]={0,1,1,-1,-1,2,2,-2,-2};
int dy[10]={0,-2,2,-2,2,1,-1,1,-1};
int main(){
    int m,n;
    int h_x,h_y;
    long long dp[30][30];
    cin>>m>>n>>h_x>>h_y;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            for(int q=0;q<9;q++){
                dp[h_x+dx[q]][h_y+dy[q]]=0;
            }
            if(i==0&&j==0) continue;
            else if(i==0) dp[i][j]=dp[i][j-1];
            else if(j==0) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[m][n];
    return 0;
}
