#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
struct line{
    int l;
    int time;
} Line[1005];
bool cmp(line x,line y){
    if(x.time==y.time){
        return x.l<y.l;
    }
    else{
        return x.time<y.time;
    }
}
int main(){
    int n;
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>Line[i].time;
        Line[i].l=i;
    }
    sort(Line,Line+n,cmp);
    for(int i=0;i<n;i++){
        sum=sum+Line[i].time*(n-i-1);
        printf("%d ",Line[i].l+1);
    }
    printf("\n%.2f",sum*1.0/n);
    return 0;
}
