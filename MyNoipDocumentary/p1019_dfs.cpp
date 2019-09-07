#include <iostream>
#include <cmath>
#include<cstdio>
#include<cstring>
using namespace std;
struct word{
    int size;
    int left;
    string s;
} words[30];
int ans=0;
int n;
int judge(string a,string b){
    int flag=0;
    int i,temp;
    for(i=0;i<(int)a.size()&&i<(int)b.size();i++){
        if(flag) break;
        temp=0;
        if(a[a.size()-i-1]==b[0]){
            flag=1;
            for(int q=(int)a.size()-1-i;q<=(int)a.size()-1;q++){
                if(a[q]!=b[temp]) {flag=0; break;}
                else flag=1;
                temp++;
            }
        }
    }
    if(flag) return i;
    else return 0;
}

void dfs(word temp,int lenth){
    int flag=0;
    for(int i=0;i<n;i++){
        if(words[i].left>0){
            int repeat=judge(temp.s,words[i].s);
            if(repeat){
                flag=1;
                words[i].left--;
                dfs(words[i],words[i].size+lenth-repeat);
                words[i].left++;
            }
        }
    }
    if(!flag) {
        ans=max(ans,lenth);
        return ;
    }
    return;
}
int main(){
    char start;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>words[i].s;
        words[i].left=2;
        words[i].size=(int)words[i].s.size();
    }
    cin>>start;
    for(int i=0;i<n;i++){
        if(words[i].s[0]==start){
            words[i].left--;
            dfs(words[i],words[i].size);
            words[i].left++;
        }
    }
    cout<<ans;
    return 0;
}
