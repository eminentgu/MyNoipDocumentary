#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    char a[50],b[50];
    int lena,lenb;
    scanf("%s",a);
    scanf("%s",b);
    lena=(int)strlen(a);
    lenb=(int)strlen(b);
    int answer[55];
    char tempa[50];
    char tempb[50];
    for(int i=0;i<=49;i++){
        tempa[i]='0';
        tempb[i]='0';
    }
    int foo=1;
    int bar=0;
    for(int i=lena;i>=0;i--){
        tempa[bar]=a[i];
        bar++;
    }
    bar=0;
    for(int i=lenb;i>=0;i--){
        tempb[bar]=b[i];
        bar++;
    }
    while((foo<=lena)||(foo<=lenb)){
        if(answer[foo]+(tempa[foo]-'0')+(tempb[foo]-'0')>=10){
            answer[foo]=answer[foo]+(tempa[foo]-'0')+(tempb[foo]-'0')-10;
            answer[foo+1]++;
        }
        else{
            answer[foo]=answer[foo]+(tempa[foo]-'0')+(tempb[foo]-'0');
        }
        foo++;
    }
    for(int i=foo-1;i>=1;i--){
        cout<<answer[i];
    }
    cout<<"\n";
    return 0;
}
