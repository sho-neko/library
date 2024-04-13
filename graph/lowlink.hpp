#include "my_template.hpp"
struct LowLink {
    Graph G;
    vl ord, low;
    vector<P> bridge;
    vl articulation;
    ll now = 0;
    LowLink(Graph G) : G(G){};
    void dfs(ll v, ll p) {
        ord[v] = now++;
        low[v] = ord[v];
        ll cnt = 0;
        bool is_articulation = false;
        for(auto nex : G[v]) {
            if(nex == p)
                continue;
            if(ord[nex] == -1) {
                cnt++;
                dfs(nex, v);
                chmin(low[v], low[nex]);
            } else
                chmin(low[v], ord[nex]);
            if(ord[v] < low[nex]) {
                bridge.emplace_back(v, nex);
                if(p != -1)
                    is_articulation = true;
            }
        }
        if(p == -1) {
            is_articulation = cnt > 1;
        }
        if(is_articulation)
            articulation.push_back(v);
        return;
    }
    void build() {
        ord.assign(G.size(), -1);
        low.assign(G.size(), -1);
        rep(i, G.size()) {
            if(ord[i] == -1)
                dfs(i, -1);
        }
    }
};
