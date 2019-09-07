#include<iostream>
#include<queue>
using namespace std;
int main(){
    int m,n,i=0;
    queue<int>q;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        q.push(i);
    }
    while(!q.empty()){
        i++;
        if(i==n){
            i=0;
            cout<<q.front()<<" ";
            q.pop();
        }
        else{
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
    }
    return 0;
}
