#include <cstdio>
#include <algorithm>
using namespace std;

/**
 题目 n元 面值1，5，11的钱，取到的最小张数
 **/

/**
 int main(void)
 {
 int f[105]={0},i,n=15;
 
 f[0]=0;
 
 for(int i=1;i<=n;i++)
 f[i]=233333333;
 
 for(int i=0;i<=n;i++)
 {
 printf("f[%d]=%d\n",i,f[i]);
 
 f[i+1] = min(f[i+1],f[i]+1);
 f[i+5] = min(f[i+5],f[i]+1);
 f[i+11] = min(f[i+11],f[i]+1);
 }
 
 return 0;
 }
 **/
//push型

//pull型

int main(){
    int f[105];
    int i,n,cost;
    f[0]=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cost=233333333;//改成 把这行去掉
        if(i-1>=0) cost=f[i-1]+1;//改成 if(i-1>=0) cost=f[i-1]+1; 似乎也可以。
        if(i-5>=0) cost=min(cost,f[i-5]+1);
        if(i-11>=0) cost=min(cost,f[i-11]+1);
        f[i]=cost;
        printf("f[%d]=%d\n",i,f[i]);
    }
    return 0;
}
