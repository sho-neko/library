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
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb
    links:
    - https://judge.yosupo.jp/problem/many_aplusb
  bundledCode: "#line 1 \"test/library_checker/sample/many_aplusb.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n#line 2 \"my_template.hpp\"\
    \n#pragma GCC target(\"avx2\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#include <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/all>\n\
    using namespace atcoder;\nusing ll = long long;\nusing ql = queue<ll>;\nusing\
    \ sl = set<ll>;\nusing vl=vector<ll>;\nusing msl=multiset<ll>;\nusing Graph =\
    \ vector<vector<ll>>;\nusing P=pair<ll,ll>;\ntemplate<typename T> inline bool\
    \ chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }\ntemplate<typename\
    \ T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false));\
    \ }\n#define YES {cout<<\"Yes\\n\";return;}\n#define NO {cout<<\"No\\n\";return;}\n\
    #define rep1(i,n) for (ll i = 1; i <= ((ll)n); ++i)\n#define rep(i,n) for (ll\
    \ i = 0; i < ((ll)n); ++i)\n#define ALL(a)  (a).begin(),(a).end()\n#define rALL(a)\
    \  (a).rbegin(),(a).rend()\n#define INF ((1LL<<62)-(1LL<<31))\n#line 3 \"test/library_checker/sample/many_aplusb.test.cpp\"\
    \n\nvoid solve(){\n    ll a,b;\n    cin>>a>>b;\n    cout<<a+b<<\"\\n\";\n}\n\n\
    int main(){\n    ios_base::sync_with_stdio(0);\n    cin.tie(nullptr);\n    int\
    \ t=1;\n    cin>>t;\n    rep(i,t)solve();\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n#include\
    \ \"my_template.hpp\"\n\nvoid solve(){\n    ll a,b;\n    cin>>a>>b;\n    cout<<a+b<<\"\
    \\n\";\n}\n\nint main(){\n    ios_base::sync_with_stdio(0);\n    cin.tie(nullptr);\n\
    \    int t=1;\n    cin>>t;\n    rep(i,t)solve();\n    return 0;\n}"
  dependsOn:
  - my_template.hpp
  isVerificationFile: true
  path: test/library_checker/sample/many_aplusb.test.cpp
  requiredBy: []
  timestamp: '2024-04-13 17:29:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/sample/many_aplusb.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/sample/many_aplusb.test.cpp
- /verify/test/library_checker/sample/many_aplusb.test.cpp.html
title: test/library_checker/sample/many_aplusb.test.cpp
---
