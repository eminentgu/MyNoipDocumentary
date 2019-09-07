#include <cstdio>
int rabbit_big=0;
int rabbit_small=0;
using namespace std;
int fun(int x){
    if(x==1){
        return 1;
    }
    else{
        rabbit_big=fun(x-1);
        rabbit_small=rabbit_big*2;
        return rabbit_big+rabbit_small;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fun(n));
    return  0;
}
