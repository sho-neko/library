#include "my_template.hpp"
#include "lowlink.hpp"
struct TwoEdgeConnectedComponents {
    Graph G;
    set<P> bridge;
    vector<ll> comp;
    void dfs(ll v,ll par, ll idx){
        comp[v] = idx;
        for(auto nex:G[v]){
            if(nex == par) continue;
            if(comp[nex] != -1) continue;
            if(bridge.count({v,nex})) continue;
            dfs(nex,v,idx);
        }
        return;
    }
    TwoEdgeConnectedComponents(Graph G) : G(G){};
    void build(Graph &t){
        LowLink lowlink(G);
        lowlink.build();
        ll n = G.size();
        comp.assign(n,-1);
        for(auto a:lowlink.bridge){
            bridge.insert(a);
            bridge.insert({a.second,a.first});
        }
        ll now = 0;
        rep(i,n){
            if(comp[i] == -1){
                dfs(i,-1,now++);
            }
        }
        t.resize(now);
        rep(i,n)t[comp[i]].emplace_back(i);
        return;
    }
};