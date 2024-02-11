---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: my_template.hpp
    title: my_template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"test/library_checker/sample/aplusb.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/aplusb\"\n#line 2 \"my_template.hpp\"\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/all>\nusing namespace\
    \ atcoder;\nusing ll = long long;\nusing ql = queue<ll>;\nusing sl = set<ll>;\n\
    using vl=vector<ll>;\nusing msl=multiset<ll>;\nusing Graph = vector<vector<ll>>;\n\
    using P=pair<ll,ll>;\ntemplate<typename T> inline bool chmax(T &a, T b) { return\
    \ ((a < b) ? (a = b, true) : (false)); }\ntemplate<typename T> inline bool chmin(T\
    \ &a, T b) { return ((a > b) ? (a = b, true) : (false)); }\n#define YES {cout<<\"\
    Yes\\n\";return;}\n#define NO {cout<<\"No\\n\";return;}\n#define rep1(i,n) for\
    \ (ll i = 1; i <= ((ll)n); ++i)\n#define rep(i,n) for (ll i = 0; i < ((ll)n);\
    \ ++i)\n#define ALL(a)  (a).begin(),(a).end()\n#define rALL(a)  (a).rbegin(),(a).rend()\n\
    #define INF ((1LL<<62)-(1LL<<31))\n#line 3 \"test/library_checker/sample/aplusb.test.cpp\"\
    \n\nvoid solve(){\n    ll a,b;\n    cin>>a>>b;\n    cout<<a+b<<endl;\n}\n\nint\
    \ main(){\n    int t=1;\n    rep(i,t)solve();\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n#include \"my_template.hpp\"\
    \n\nvoid solve(){\n    ll a,b;\n    cin>>a>>b;\n    cout<<a+b<<endl;\n}\n\nint\
    \ main(){\n    int t=1;\n    rep(i,t)solve();\n    return 0;\n}"
  dependsOn:
  - my_template.hpp
  isVerificationFile: true
  path: test/library_checker/sample/aplusb.test.cpp
  requiredBy: []
  timestamp: '2024-02-11 20:31:56+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/sample/aplusb.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/sample/aplusb.test.cpp
- /verify/test/library_checker/sample/aplusb.test.cpp.html
title: test/library_checker/sample/aplusb.test.cpp
---
