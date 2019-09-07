//用vector存图
#include <cstdio>
#include <vector>
//#include <pair>
using namespace std;
const int N=1e5+10;
struct Edge{
    int v,w;
};
Edge make_Edge(int v,int w){
    Edge cur;cur.v=v;cur.w=w;return cur;
}
vector <Edge> G[N];
void addedge(int u,int v,int w){
    G[u].push_back(make_Edge(v,w));
    G[v].push_back(make_Edge(u,w));
}


vector <pair<int,int> >Q[N];
void addedge1(int u,int v,int w){
    Q[u].push_back(make_pair(v,w));
    Q[v].push_back(make_pair(u,w));
}
int main(){
    
}
