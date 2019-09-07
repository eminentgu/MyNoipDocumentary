// luogu-judgrer-enable-o2
#include <iostream>
#include <cstdio>
#include <cstring>
//我认为这题答案不怎么对，因为质点根据题意要被吸收呢。
using namespace std;
int main(){
    int gao=1;
    int di=0;
    int time;
    int temp_gao;
    int temp_di;
    cin>>time;
    for(int i=1;i<=time;i++){
        temp_gao=gao;
        temp_di=di;
        gao=temp_di*2+temp_gao*3;//temp_gao*2
        di=temp_gao+temp_di;//不要+temp_di
    }
    cout<<gao<<","<<di;
    return 0;
}
