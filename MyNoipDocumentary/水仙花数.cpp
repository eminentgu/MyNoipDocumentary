// luogu-judger-enable-o2
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int identify(int a){
    int foo;
    foo=(a%10)*(a%10)*(a%10)+(a/10%10)*(a/10%10)*(a/10%10)+(a/100)*(a/100)*(a/100);
    if(foo==a){
        foo=1;
    }
    else{
        foo=0;
    }
    return foo;
}
int main(){
    int num;
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int q=0;q<=9;q++){
                num=i*100+j*10+q;
                if(identify(num)){
                    cout<<num<<" ";
                }
            }
        }
    }
    return 0;
}
