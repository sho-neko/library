---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: data_structure/unionfind.hpp
    title: data_structure/unionfind.hpp
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
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/library_checker/data_structure/unionfind.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#line 2 \"my_template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/all>\nusing\
    \ namespace atcoder;\nusing ll = long long;\nusing ql = queue<ll>;\nusing sl =\
    \ set<ll>;\nusing vl=vector<ll>;\nusing msl=multiset<ll>;\nusing Graph = vector<vector<ll>>;\n\
    using P=pair<ll,ll>;\ntemplate<typename T> inline bool chmax(T &a, T b) { return\
    \ ((a < b) ? (a = b, true) : (false)); }\ntemplate<typename T> inline bool chmin(T\
    \ &a, T b) { return ((a > b) ? (a = b, true) : (false)); }\n#define YES {cout<<\"\
    Yes\\n\";return;}\n#define NO {cout<<\"No\\n\";return;}\n#define rep1(i,n) for\
    \ (ll i = 1; i <= ((ll)n); ++i)\n#define rep(i,n) for (ll i = 0; i < ((ll)n);\
    \ ++i)\n#define ALL(a)  (a).begin(),(a).end()\n#define rALL(a)  (a).rbegin(),(a).rend()\n\
    #define INF ((1LL<<62)-(1LL<<31))\n#line 2 \"data_structure/unionfind.hpp\"\n\
    struct UnionFind {\n    vector<int> data;\n    UnionFind(int size) : data(size,\
    \ -1) {}\n    bool merge(int x, int y) {\n        x = root(x), y = root(y);\n\
    \        if(x != y) {\n            if(data[y] < data[x])\n                swap(x,\
    \ y);\n            data[x] += data[y], data[y] = x;\n        }\n        return\
    \ x != y;\n    }\n    bool same(int x, int y) { return root(x) == root(y); }\n\
    \    int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }\n \
    \   int size(int x) { return -data[root(x)]; }\n};\n#line 4 \"test/library_checker/data_structure/unionfind.cpp\"\
    \nvoid solve() {\n    ll n, q;\n    cin >> n >> q;\n    UnionFind uf(n);\n   \
    \ rep(i, q) {\n        ll t, u, v;\n        cin >> t >> u >> v;\n        if(t\
    \ == 0)\n            uf.merge(u, v);\n        else\n            cout << uf.same(u,\
    \ v) << \"\\n\";\n    }\n}\nint main() {\n    ios_base::sync_with_stdio(0);\n\
    \    cin.tie(nullptr);\n    ll t = 1;\n    rep(i, t) solve();\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include \"\
    ../../../data_structure/unionfind.hpp\"\n#include \"../../../my_template.hpp\"\
    \nvoid solve() {\n    ll n, q;\n    cin >> n >> q;\n    UnionFind uf(n);\n   \
    \ rep(i, q) {\n        ll t, u, v;\n        cin >> t >> u >> v;\n        if(t\
    \ == 0)\n            uf.merge(u, v);\n        else\n            cout << uf.same(u,\
    \ v) << \"\\n\";\n    }\n}\nint main() {\n    ios_base::sync_with_stdio(0);\n\
    \    cin.tie(nullptr);\n    ll t = 1;\n    rep(i, t) solve();\n}\n"
  dependsOn:
  - data_structure/unionfind.hpp
  - my_template.hpp
  isVerificationFile: false
  path: test/library_checker/data_structure/unionfind.cpp
  requiredBy: []
  timestamp: '2024-02-11 20:48:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/library_checker/data_structure/unionfind.cpp
layout: document
redirect_from:
- /library/test/library_checker/data_structure/unionfind.cpp
- /library/test/library_checker/data_structure/unionfind.cpp.html
title: test/library_checker/data_structure/unionfind.cpp
---
