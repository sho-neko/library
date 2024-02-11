---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: my_template.hpp
    title: my_template.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/library_checker/data_structure/unionfind.cpp
    title: test/library_checker/data_structure/unionfind.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"my_template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#include <atcoder/all>\nusing namespace atcoder;\nusing ll = long long;\n\
    using ql = queue<ll>;\nusing sl = set<ll>;\nusing vl=vector<ll>;\nusing msl=multiset<ll>;\n\
    using Graph = vector<vector<ll>>;\nusing P=pair<ll,ll>;\ntemplate<typename T>\
    \ inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }\n\
    template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b,\
    \ true) : (false)); }\n#define YES {cout<<\"Yes\\n\";return;}\n#define NO {cout<<\"\
    No\\n\";return;}\n#define rep1(i,n) for (ll i = 1; i <= ((ll)n); ++i)\n#define\
    \ rep(i,n) for (ll i = 0; i < ((ll)n); ++i)\n#define ALL(a)  (a).begin(),(a).end()\n\
    #define rALL(a)  (a).rbegin(),(a).rend()\n#define INF ((1LL<<62)-(1LL<<31))\n\
    #line 2 \"data_structure/unionfind.hpp\"\nstruct UnionFind {\n    vector<int>\
    \ data;\n    UnionFind(int size) : data(size, -1) {}\n    bool merge(int x, int\
    \ y) {\n        x = root(x), y = root(y);\n        if(x != y) {\n            if(data[y]\
    \ < data[x])\n                swap(x, y);\n            data[x] += data[y], data[y]\
    \ = x;\n        }\n        return x != y;\n    }\n    bool same(int x, int y)\
    \ { return root(x) == root(y); }\n    int root(int x) { return data[x] < 0 ? x\
    \ : data[x] = root(data[x]); }\n    int size(int x) { return -data[root(x)]; }\n\
    };\n"
  code: "#include \"../my_template.hpp\"\nstruct UnionFind {\n    vector<int> data;\n\
    \    UnionFind(int size) : data(size, -1) {}\n    bool merge(int x, int y) {\n\
    \        x = root(x), y = root(y);\n        if(x != y) {\n            if(data[y]\
    \ < data[x])\n                swap(x, y);\n            data[x] += data[y], data[y]\
    \ = x;\n        }\n        return x != y;\n    }\n    bool same(int x, int y)\
    \ { return root(x) == root(y); }\n    int root(int x) { return data[x] < 0 ? x\
    \ : data[x] = root(data[x]); }\n    int size(int x) { return -data[root(x)]; }\n\
    };"
  dependsOn:
  - my_template.hpp
  isVerificationFile: false
  path: data_structure/unionfind.hpp
  requiredBy:
  - test/library_checker/data_structure/unionfind.cpp
  timestamp: '2024-02-11 20:31:56+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/unionfind.hpp
layout: document
redirect_from:
- /library/data_structure/unionfind.hpp
- /library/data_structure/unionfind.hpp.html
title: data_structure/unionfind.hpp
---
