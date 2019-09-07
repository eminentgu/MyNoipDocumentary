#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char a[65];
    int count[1000]={0};
    char *p;
    gets(a);
    p=a;
    while(*p!='\0'){
        if(*p!=' '){
            count[(int(*p))]++;
        }
        p++;
    }
    for(int i=(int)'A';i<=(int)'z';i++){
         if(count[i]!=0){
            cout<<char(i)<<" :"<<count[i]<<endl;
        }
    }
    return 0;
}
