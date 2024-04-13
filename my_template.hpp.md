---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: data_structure/unionfind.hpp
    title: data_structure/unionfind.hpp
  - icon: ':warning:'
    path: graph/lowlink.hpp
    title: graph/lowlink.hpp
  - icon: ':warning:'
    path: graph/two-edge-connected_components.hpp
    title: graph/two-edge-connected_components.hpp
  - icon: ':warning:'
    path: test/library_checker/data_structure/unionfind.cpp
    title: test/library_checker/data_structure/unionfind.cpp
  - icon: ':warning:'
    path: test/library_checker/graph/two-edge-connected_components.cpp
    title: test/library_checker/graph/two-edge-connected_components.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/sample/aplusb.test.cpp
    title: test/library_checker/sample/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/sample/many_aplusb.test.cpp
    title: test/library_checker/sample/many_aplusb.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 2 "my_template.hpp"

    #pragma GCC target("avx2")

    #pragma GCC optimize("O3")

    #pragma GCC optimize("unroll-loops")

    #include <bits/stdc++.h>

    using namespace std;

    #include <atcoder/all>

    using namespace atcoder;

    using ll = long long;

    using ql = queue<ll>;

    using sl = set<ll>;

    using vl=vector<ll>;

    using msl=multiset<ll>;

    using Graph = vector<vector<ll>>;

    using P=pair<ll,ll>;

    template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b,
    true) : (false)); }

    template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b,
    true) : (false)); }

    #define YES {cout<<"Yes\n";return;}

    #define NO {cout<<"No\n";return;}

    #define rep1(i,n) for (ll i = 1; i <= ((ll)n); ++i)

    #define rep(i,n) for (ll i = 0; i < ((ll)n); ++i)

    #define ALL(a)  (a).begin(),(a).end()

    #define rALL(a)  (a).rbegin(),(a).rend()

    #define INF ((1LL<<62)-(1LL<<31))

    '
  code: '#pragma once

    #pragma GCC target("avx2")

    #pragma GCC optimize("O3")

    #pragma GCC optimize("unroll-loops")

    #include <bits/stdc++.h>

    using namespace std;

    #include <atcoder/all>

    using namespace atcoder;

    using ll = long long;

    using ql = queue<ll>;

    using sl = set<ll>;

    using vl=vector<ll>;

    using msl=multiset<ll>;

    using Graph = vector<vector<ll>>;

    using P=pair<ll,ll>;

    template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b,
    true) : (false)); }

    template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b,
    true) : (false)); }

    #define YES {cout<<"Yes\n";return;}

    #define NO {cout<<"No\n";return;}

    #define rep1(i,n) for (ll i = 1; i <= ((ll)n); ++i)

    #define rep(i,n) for (ll i = 0; i < ((ll)n); ++i)

    #define ALL(a)  (a).begin(),(a).end()

    #define rALL(a)  (a).rbegin(),(a).rend()

    #define INF ((1LL<<62)-(1LL<<31))

    '
  dependsOn: []
  isVerificationFile: false
  path: my_template.hpp
  requiredBy:
  - data_structure/unionfind.hpp
  - test/library_checker/data_structure/unionfind.cpp
  - test/library_checker/graph/two-edge-connected_components.cpp
  - graph/lowlink.hpp
  - graph/two-edge-connected_components.hpp
  timestamp: '2024-04-13 17:29:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/sample/many_aplusb.test.cpp
  - test/library_checker/sample/aplusb.test.cpp
documentation_of: my_template.hpp
layout: document
redirect_from:
- /library/my_template.hpp
- /library/my_template.hpp.html
title: my_template.hpp
---