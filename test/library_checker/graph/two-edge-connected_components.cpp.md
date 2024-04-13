---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: graph/lowlink.hpp
    title: graph/lowlink.hpp
  - icon: ':warning:'
    path: graph/two-edge-connected_components.hpp
    title: graph/two-edge-connected_components.hpp
  - icon: ':heavy_check_mark:'
    path: my_template.hpp
    title: my_template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/two_edge_connected_components
  bundledCode: "#line 1 \"test/library_checker/graph/two-edge-connected_components.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/two_edge_connected_components\"\
    \n// \u591A\u91CD\u7DE8\u304C\u3042\u308B\u5834\u5408\u306B\u5BFE\u5FDC\u3067\u304D\
    \u3066\u3044\u306A\u3044\u3001\u3068\u601D\u3046\n#line 2 \"my_template.hpp\"\n\
    #pragma GCC target(\"avx2\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#include <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/all>\n\
    using namespace atcoder;\nusing ll = long long;\nusing ql = queue<ll>;\nusing\
    \ sl = set<ll>;\nusing vl=vector<ll>;\nusing msl=multiset<ll>;\nusing Graph =\
    \ vector<vector<ll>>;\nusing P=pair<ll,ll>;\ntemplate<typename T> inline bool\
    \ chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }\ntemplate<typename\
    \ T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false));\
    \ }\n#define YES {cout<<\"Yes\\n\";return;}\n#define NO {cout<<\"No\\n\";return;}\n\
    #define rep1(i,n) for (ll i = 1; i <= ((ll)n); ++i)\n#define rep(i,n) for (ll\
    \ i = 0; i < ((ll)n); ++i)\n#define ALL(a)  (a).begin(),(a).end()\n#define rALL(a)\
    \  (a).rbegin(),(a).rend()\n#define INF ((1LL<<62)-(1LL<<31))\n#line 2 \"graph/lowlink.hpp\"\
    \nstruct LowLink {\n    Graph G;\n    vl ord, low;\n    vector<P> bridge;\n  \
    \  vl articulation;\n    ll now = 0;\n    LowLink(Graph G) : G(G){};\n    void\
    \ dfs(ll v, ll p) {\n        ord[v] = now++;\n        low[v] = ord[v];\n     \
    \   ll cnt = 0;\n        bool is_articulation = false;\n        for(auto nex :\
    \ G[v]) {\n            if(nex == p)\n                continue;\n            if(ord[nex]\
    \ == -1) {\n                cnt++;\n                dfs(nex, v);\n           \
    \     chmin(low[v], low[nex]);\n            } else\n                chmin(low[v],\
    \ ord[nex]);\n            if(ord[v] < low[nex]) {\n                bridge.emplace_back(v,\
    \ nex);\n                if(p != -1)\n                    is_articulation = true;\n\
    \            }\n        }\n        if(p == -1) {\n            is_articulation\
    \ = cnt > 1;\n        }\n        if(is_articulation)\n            articulation.push_back(v);\n\
    \        return;\n    }\n    void build() {\n        ord.assign(G.size(), -1);\n\
    \        low.assign(G.size(), -1);\n        rep(i, G.size()) {\n            if(ord[i]\
    \ == -1)\n                dfs(i, -1);\n        }\n    }\n};\n#line 3 \"graph/two-edge-connected_components.hpp\"\
    \nstruct TwoEdgeConnectedComponents {\n    Graph G;\n    set<P> bridge;\n    vector<ll>\
    \ comp;\n    void dfs(ll v,ll par, ll idx){\n        comp[v] = idx;\n        for(auto\
    \ nex:G[v]){\n            if(nex == par) continue;\n            if(comp[nex] !=\
    \ -1) continue;\n            if(bridge.count({v,nex})) continue;\n           \
    \ dfs(nex,v,idx);\n        }\n        return;\n    }\n    TwoEdgeConnectedComponents(Graph\
    \ G) : G(G){};\n    void build(Graph &t){\n        LowLink lowlink(G);\n     \
    \   lowlink.build();\n        ll n = G.size();\n        comp.assign(n,-1);\n \
    \       for(auto a:lowlink.bridge){\n            bridge.insert(a);\n         \
    \   bridge.insert({a.second,a.first});\n        }\n        ll now = 0;\n     \
    \   rep(i,n){\n            if(comp[i] == -1){\n                dfs(i,-1,now++);\n\
    \            }\n        }\n        t.resize(now);\n        rep(i,n)t[comp[i]].emplace_back(i);\n\
    \        return;\n    }\n};\n#line 5 \"test/library_checker/graph/two-edge-connected_components.cpp\"\
    \nint main(){\n    ll n,m;\n    cin>>n>>m;\n    Graph G(n);\n    rep(i,m){\n \
    \       ll a,b;\n        cin>>a>>b;\n        G[a].push_back(b);\n        G[b].push_back(a);\n\
    \    }\n    Graph t;\n    TwoEdgeConnectedComponents tecc(G);\n    tecc.build(t);\n\
    \    cout<<t.size()<<endl;\n    for(auto a:t){\n        cout<<a.size();\n    \
    \    for(auto b:a){\n            cout<<\" \"<<b;\n        }\n        cout<<endl;\n\
    \    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/two_edge_connected_components\"\
    \n// \u591A\u91CD\u7DE8\u304C\u3042\u308B\u5834\u5408\u306B\u5BFE\u5FDC\u3067\u304D\
    \u3066\u3044\u306A\u3044\u3001\u3068\u601D\u3046\n#include \"my_template.hpp\"\
    \n#include \"graph/two-edge-connected_components.hpp\"\nint main(){\n    ll n,m;\n\
    \    cin>>n>>m;\n    Graph G(n);\n    rep(i,m){\n        ll a,b;\n        cin>>a>>b;\n\
    \        G[a].push_back(b);\n        G[b].push_back(a);\n    }\n    Graph t;\n\
    \    TwoEdgeConnectedComponents tecc(G);\n    tecc.build(t);\n    cout<<t.size()<<endl;\n\
    \    for(auto a:t){\n        cout<<a.size();\n        for(auto b:a){\n       \
    \     cout<<\" \"<<b;\n        }\n        cout<<endl;\n    }\n}"
  dependsOn:
  - my_template.hpp
  - graph/two-edge-connected_components.hpp
  - graph/lowlink.hpp
  isVerificationFile: false
  path: test/library_checker/graph/two-edge-connected_components.cpp
  requiredBy: []
  timestamp: '2024-04-13 20:15:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/library_checker/graph/two-edge-connected_components.cpp
layout: document
redirect_from:
- /library/test/library_checker/graph/two-edge-connected_components.cpp
- /library/test/library_checker/graph/two-edge-connected_components.cpp.html
title: test/library_checker/graph/two-edge-connected_components.cpp
---
