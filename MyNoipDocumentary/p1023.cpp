// luogu-judger-enable-o2
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int pingjie(char starts,char ends,int p1_,int p2_,int p3_){
    //开始转换
    switch (p1_){
        case 1:
            if(p3_==1){
                for(int i=(int)starts+1;i<(int)ends;i++){
                    for(int q=1;q<=p2_;q++){
                        cout<<char(i);
                    }
                }
                
            }else{
                for(int i=(int)ends-1;i>(int)starts;i--){
                    for(int q=1;q<=p2_;q++){
                        cout<<char(i);
                    }
                }
            }
            //小写
            break;
        case 2:
            if(p3_==1){
                for(int i=(int)starts+1;i<(int)ends;i++){
                    for(int q=1;q<=p2_;q++){
                        if(i<='9'){
                            cout<<char(i);
                        }
                        else{
                        cout<<char(i-32);
                        }
                    }
                }
                
            }else{
                for(int i=(int)ends-1;i>(int)starts;i--){
                    for(int q=1;q<=p2_;q++){
                        if(i<='9'){
                            cout<<char(i);
                        }
                        else{
                            cout<<char(i-32);
                        }
                    }
                }
                
            }
            //大写
            break;
        case 3:
            if(p3_==1){
                for(int i=(int)starts+1;i<(int)ends;i++){
                    for(int q=1;q<=p2_;q++){
                        cout<<"*";
                    }
                }
            }
            else{
                for(int i=(int)ends-1;i>(int)starts;i--){
                    for(int q=1;q<=p2_;q++){
                        cout<<"*";
                    }
                }
                
            }
            //*
            break;
    }
    return 1;
}
int main(){
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    char a[100];
    scanf("%s",a);
    
    //判断
    int i=0;
    while(i<=(int)strlen(a)){
        if(a[i]=='-'){
            if((((a[i-1]>='0')&&(a[i+1]<='9'))||((a[i-1]>='a')&&(a[i+1]<='z')))&&(a[i-1]<a[i+1])){
                pingjie(a[i-1],a[i+1],p1,p2,p3);
            }
            else{
                cout<<a[i];
            }
            
        }
        else{
            cout<<a[i];
            }
        i++;
        }
    return 0;
}
