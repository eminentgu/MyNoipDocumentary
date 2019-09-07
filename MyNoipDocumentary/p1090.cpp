#include<cstdio>
#include <cstring>
#include<iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>, greater<int> > q;
    //priority_queue <int,vector<int>,less<int> >q;降序
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        q.push(temp);
    }
    int ans=0;
    while(q.size()!=1){
        int temp;
        temp=q.top();
        q.pop();
        temp+=q.top();
        q.pop();
        ans+=temp;
        q.push(temp);
    }
    cout<<ans;
    return 0;
}
