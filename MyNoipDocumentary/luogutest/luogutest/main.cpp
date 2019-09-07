#include <iostream>
#include <cmath>
using namespace std;
int dleft(int left,int x,int y){
    int ans=0;
    if(left<x){
        ans=x-left;
    }
    if(left>y){
        ans=y-left;
    }
    if((x<=left)&&(y>=left)){
        ans=0;
    }
    return ans;
}
int dright(int right,int x,int y){
    int ans=0;
    if(right<x){
        ans=x-right;
    }
    if(right>y){
        ans=y-right;
    }
    if((x<=right)&&(y>=right)){
        ans=0;
    }
    return ans;
}
int main(int argc, const char * argv[]) {
    int n,m;
    int sum=0;
    cin>>n>>m;
    int a[n+1];
    a[n]=-1;
    int b[2][n+1];
    int left=0;
    int right=m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[0][i]>>b[1][i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            if(b[0][i]<b[0][i+1]){
                sum+=abs(dleft(left,b[0][i],b[1][i]));
                left+=dleft(left,b[0][i],b[1][i]);
                sum+=abs(dright(right,b[0][i+1],b[1][i+1]));
                right+=dright(right,b[0][i+1],b[1][i+1]);
                i++;
            }
            else{
                sum+=abs(dleft(left,b[0][i+1],b[1][i+1]));
                left+=dleft(left,b[0][i+1],b[1][i+1]);
                sum+=abs(dright(right,b[0][i],b[1][i]));
                right+=dright(right,b[0][i],b[1][i]);
                i++;
            }
        }
        else{
            if(abs(dleft(left,b[0][i],b[1][i]))<abs(dright(right,b[0][i],b[1][i]))){
                sum+=abs(dleft(left,b[0][i],b[1][i]));
                left=left+dleft(left,b[0][i],b[1][i]);
            }
            else{
                sum+=abs(dright(right,b[0][i],b[1][i]));
                right=right+dright(right,b[0][i],b[1][i]);
                     }
        }
    }
    printf("%d",sum);
    return 0;
}
