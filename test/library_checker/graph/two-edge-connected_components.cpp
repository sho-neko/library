#define PROBLEM "https://judge.yosupo.jp/problem/two_edge_connected_components"
// 多重編がある場合に対応できていない、と思う
#include "my_template.hpp"
#include "graph/two-edge-connected_components.hpp"
int main(){
    ll n,m;
    cin>>n>>m;
    Graph G(n);
    rep(i,m){
        ll a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    Graph t;
    TwoEdgeConnectedComponents tecc(G);
    tecc.build(t);
    cout<<t.size()<<endl;
    for(auto a:t){
        cout<<a.size();
        for(auto b:a){
            cout<<" "<<b;
        }
        cout<<endl;
    }
}