#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
#include "../../../data_structure/unionfind.hpp"
#include "../../../my_template.hpp"
void solve() {
    ll n, q;
    cin >> n >> q;
    UnionFind uf(n);
    rep(i, q) {
        ll t, u, v;
        cin >> t >> u >> v;
        if(t == 0)
            uf.merge(u, v);
        else
            cout << uf.same(u, v) << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t = 1;
    rep(i, t) solve();
}
