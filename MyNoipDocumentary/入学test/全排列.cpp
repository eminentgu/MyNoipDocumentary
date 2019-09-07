#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[7],n;
char s[7];
int main(){
    gets(s);
    n=(int)strlen(s);
    for(int i=0;i<n;i++){
        a[i]=s[i]-'a';
    }
    do{
        for(int i=0;i<n;i++){
            printf("%c",a[i]+'a');
            
        }
        cout<<endl;
        
    }while(next_permutation(a,a+n));
    return 0;
}
