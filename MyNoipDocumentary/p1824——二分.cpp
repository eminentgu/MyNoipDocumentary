/**
 题目描述
 Farmer John建造了一个有N(2<=N<=100,000)个隔间的牛棚，这些隔间分布在一条直线上，坐标是x1,...,xN (0<=xi<=1,000,000,000)。
 他的C(2<=C<=N)头牛不满于隔间的位置分布，它们为牛棚里其他的牛的存在而愤怒。为了防止牛之间的互相打斗，
 Farmer John想把这些牛安置在指定的隔间，所有牛中相邻两头的最近距离越大越好。那么，这个最大的最近距离是多少呢？
 
 输入格式
 第1行：两个用空格隔开的数字N和C。
 第2~N+1行：每行一个整数，表示每个隔间的坐标。
 
 输出格式
 输出只有一行，即相邻两头牛最大的最近距离。
 
 输入输出样例
 输入
 5 3
 1
 2
 8
 4
 9
 
 输出
 3
 **/

/**思路
 二分答案，check(int x)是关键。
 这里求最小值的最大值
 **/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100005]={0};
int n,m;
int check(int x){
    int last=a[1];
    int ans=1;
    for(int i=2;i<=n;i++){
        if(a[i]-last>=x) ans++,last=a[i];
    }
    if(ans>=m) return 1;
    else return 0;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    //以下是模版，注意l，r的取值很重要，不然可能出现答案在取值范围之外的情况
    int l=0;
    int r=a[n];
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid))l=mid+1;//求最大值的最小值时，这里写r=mid-1;
        else r=mid-1;//求最大值的最小值时，这里写l=mid+1;
    }
    if(check(l)) cout<<l;
    else cout<<r;
    //模版结束
    return 0;
}

