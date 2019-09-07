#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char a[100005],b[100005];
int bijiao(char *p1,char *p2){
    if(*p1>*p2){
        return 1;
    }
    else if(*p1<*p2){
        return 0;
    }
    else{
        p1++;
        p2++;
        return bijiao(p1,p2);
    }
}
int main(){
    char *p1,*p2;
    gets(a);
    gets(b);
    p1=a;
    p2=b;
    if(bijiao(p1,p2)){
        cout<<"first";
    }
    else{
        cout<<"second";
    }
    return 0;
}
