#pragma once
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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
#define YES {cout<<"Yes\n";return;}
#define NO {cout<<"No\n";return;}
#define rep1(i,n) for (ll i = 1; i <= ((ll)n); ++i)
#define rep(i,n) for (ll i = 0; i < ((ll)n); ++i)
#define ALL(a)  (a).begin(),(a).end()
#define rALL(a)  (a).rbegin(),(a).rend()
#define INF ((1LL<<62)-(1LL<<31))
