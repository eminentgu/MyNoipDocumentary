#include <iostream>
#include <queue>
#include <cstring>
#include<string>
using namespace std;
int main(){
    int dp[110][110];
    string a;
    while(cin>>a){
        memset(dp,0,sizeof(dp));
        if(a=="end") break;
        for(int len=1;len<a.size();len++){
            for(int i=0;i+len<a.size();i++){
                int j=i+len;
                if((a[i]=='('&&a[j]==')')||(a[i]=='['&&a[j]==']')){
                    dp[i][j]=dp[i+1][j-1]+2;
                }
                for(int k=i;k<=j;k++){
                    dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]);
                }
            }
        }
        cout<<dp[0][a.size()-1]<<endl;
    }
    return 0;
}
