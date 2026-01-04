#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    ll n,m;cin>>n>>m;
    vector<ll> k(n+1),c(m+1);
    for (ll i = 1; i <= n; i++){
        cin>>k[i];
    }
    sort(k.begin(),k.end());
    for (ll i = 1; i <= m; i++){
        cin>>c[i];
    }
    ll ans = 0;
    ll j = 1;
    for (ll i = n; i >= 1; i--){
        if(j <= k[i]){
            ans += c[j];
            j++;
        }
        else{
            ans += c[k[i]];
        }
    }
    cout<<ans<<endl; 
}
int main(){
    ll t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}