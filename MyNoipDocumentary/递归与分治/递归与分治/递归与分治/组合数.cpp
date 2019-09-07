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
/***
#include<iostream>
#include<map>
using namespace std;
map<long long,bool>a;//记忆化用的，用来存是否搜到过
map<long long,long long>b;//记忆化用的，用来存数据
const int m=6662333;
long long n,p;
long long mi(long long d,long long c){//d表示底数，c表示次数
    if(c==1)return d%m;
    if(c==0)return 1;
    if(a[c])return b[c];//如果搜到过，那就返回存储的数据
    a[c]=1;//没有的话这次搜到了，a变为1
    b[c]=((mi(d,c/2)%m)*(mi(d,c-c/2)%m))%m;//存储数据
    return b[c];
}
int main(){
    cin>>n;
    n--;
    p=mi(2,n);
    p%=m;
    cout<<p;
    return 0;
}
**/
