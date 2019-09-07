#include <cstdio>
using namespace std;
long jiecheng(long x){
    long ans=1;
    for(int i=1;i<=x;i++){
        ans*=i;
    }
    return ans;
}
long foo(long x,long y){
    long ans=1;
    for(long i=y+1;i<=x;i++){
        ans*=i;
    }
    return ans;
}
long c(long n,long i){
    long ans;
    ans=foo(n,i)/jiecheng(n-i);
    return ans;
}
int main(){
    //long n;
    //scanf("%ld",&n);
    //小组数据找规律
    for(int n=1;n<=20;n++){
        long ans=0;
        for(long i=0;i<=n;i=i+2){
            ans+=c(n,i);
        }
        ans%=6662333;
        printf("%ld",ans);
    }
    return 0;
}
