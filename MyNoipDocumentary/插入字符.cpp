// luogu-judgrer-enable-o2
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char a[101];
    scanf("%s",a);
    int num=(int)strlen(a);
    char foo=a[num-1];
    for(int i=num-1;i>num/2-1;i--){
            a[i]=a[i-1];
        }
        a[num/2]=foo;
    puts(a);
    return 0;
}
