#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb"
#include "my_template.hpp"

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
}

int main(){
    int t=1;
    cin>>t;
    rep(i,t)solve();
    return 0;
}