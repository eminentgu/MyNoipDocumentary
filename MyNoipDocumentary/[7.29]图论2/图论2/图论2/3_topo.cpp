//拓扑排序模版

int ind[MAXN];//记录入度
int d[MAXN];
int q[MAXN], qhead = 0, qtail = 0;//手写队列讲究

void topo() {
    for (int i = 1; i <= n; i++) {
        if (!ind[i]) q[qtail++] = i;
    }
    while (qhead != qtail) {
        int now = q[qhead++];
        for (int i = he[now]; i; i = ne[i]) {
            Edge &e = ed[i];
            d[e.to] = max(d[e.to], d[now] + 1);
            if (!--ind[e.to]) q[qtail++] = e.to;
        }
    }
}
