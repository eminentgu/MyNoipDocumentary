//
//  main.cpp
//  noip
//
//  Created by 顾喜军 on 2019/7/16.
//  Copyright © 2019 顾翔. All rights reserved.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+2];
    a[0]=0;
    int temp;
    for(int i=1;i<=n+1;i++){
        cin>>a[i];
    }
    if(a[1]!=0){
        if(a[1]>0){
            if(a[1]==1){
                cout<<"x^"<<n;
            }
            else{
                cout<<a[1]<<"x^"<<n;
            }
        }
        else{
            if(a[1]==-1){
                cout<<"-"<<"x^"<<n;
            }
            else{
                cout<<a[1]<<"x^"<<n;
            }
        }
    }
    temp=n-1;
    for(int q=2;q<=n;q++){
        if(a[q]!=0){
            if(a[q]>0){
                if(a[q]==1){
                    if(temp==1){
                        cout<<"+"<<"x";
                    }
                    else{
                        cout<<"+"<<"x^"<<temp;
                        
                    }
                }
                else{
                    if(temp==1){
                        cout<<"+"<<a[q]<<"x";
                    }
                    else{
                        cout<<"+"<<a[q]<<"x^"<<temp;
                    }
                }
            }
            else{
                if(a[q]==-1){
                    if(temp==1){
                        cout<<"-"<<"x";
                    }
                    else{
                        cout<<"-"<<"x^"<<temp;
                    }
                }
                else{
                    if(temp==1){
                        cout<<a[q]<<"x";
                    }
                    else{cout<<a[q]<<"x^"<<temp;}
                }
            }
            }
        temp--;
    }
    if(a[n+1]>0){
        cout<<"+"<<a[n+1];
    }
    else if(a[n+1]<0){
        cout<<a[n+1];
    }
    return 0;
}
