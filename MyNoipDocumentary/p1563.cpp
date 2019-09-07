//
//  main.cpp
//  noip
//
//  Created by 顾喜军 on 2019/7/16.
//  Copyright © 2019 顾翔. All rights reserved.
//

#include <iostream>
#include <cstring>
#include<cstdio>
using namespace std;
int godown(int foo,int bar,int dir){
    bar+=dir;
    while(bar>foo){
        bar-=foo;
    }
    return bar;}
int goup(int foo,int bar,int dir){
    bar-=dir;
    while(bar<=0){
        bar+=foo;
    }
    return bar;
}
int main(){
    int n,m;
    int move_dir,face;
    int num=1;
    cin>>n>>m;
    int a[100001];
    char b[100001][11];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        scanf("%s", b[i]);
    }
    for(int i=1;i<=m;i++){
        cin>>face>>move_dir;
        if(a[num]==0){
            if(face==0){
                num=goup(n,num,move_dir);
            }
            else{
                num=godown(n,num,move_dir);
            }
        }else{
            if(face==0){
                num=godown(n,num,move_dir);
            }
            else{
                num=goup(n,num,move_dir);
            }
        }
    }
    printf("%s",b[num]);
    return 0;
}
