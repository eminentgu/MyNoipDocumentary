#include<cstdio>
#include <cstring>
using namespace std;
char ans[5000][1500];
void add(int x,int y){
    int a[1500]={0};
    int b[1500]={0};
    int c[1500]={0};
    int temp;
    temp=(int)strlen(ans[x])-1;
    for(int i=0;i<=(int)strlen(ans[x])-1;i++){
        a[i]=ans[x][temp]-'0';
        temp--;
    }
    temp=(int)strlen(ans[y])-1;
    for(int i=0;i<=(int)strlen(ans[y])-1;i++){
        b[i]=ans[y][temp]-'0';
        temp--;
    }
    for(int i=0;i<=(int)strlen(ans[x])-1;i++){
        c[i]=a[i]+b[i]+c[i];
        if(c[i]>=10){
            c[i]-=10;
            c[i+1]++;
        }
    }
    int i;
    if(c[(int)strlen(ans[x])]==0){
        i=(int)strlen(ans[x])-1;
    }
    else{
        i=(int)strlen(ans[x]);
    }
    temp=0;
    for(;i>=0;i--){
            ans[x+1][temp]=c[i]+'0';
            temp++;
    }
    }
void f(int x){
    if((x!=0)&&(x!=1)&&(x!=2)){
        if(ans[x-1][0]=='\0')
        {
            f(x-1);
            
        }
        add(x-1,x-2);
        
    }
}
int main(){
    ans[0][0]='0';
    ans[1][0]='1';
    ans[2][0]='2';
    int n;
    scanf("%d",&n);
    f(n);
    printf("%s",ans[n]);
    return 0;
}
