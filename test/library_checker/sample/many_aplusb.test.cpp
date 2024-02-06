#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb"
#include "my_template.hpp"

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    rep(i,t)solve();
    return 0;
}