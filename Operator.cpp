#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        v.push_back(x);
    }
    
    ll sum = 0;
    for(ll i=0; i<n; i++){
        if(i+3<=n){
            if((v[i] + v[i+1] + v[i+2]) %3 == 0 )continue;
            else{
                ll x = v[i] + v[i+1] + v[i+2];
                ll y = x/3; 
                sum += 3*(y+1) - x;
                ll cnt = 3*(y+1) - x;
                v[i+2] += cnt; 
            }
        }
    }
    cout<< sum<<endl;
}

int main() {
	ll t;cin>>t;
	while(t--) solve();
	return 0;
}
