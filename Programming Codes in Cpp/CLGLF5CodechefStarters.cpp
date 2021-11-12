#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define psb push_back
#define ppb pop_back


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
for (ll j=0;j<t;j++){
    ll n,m;
    cin>>n>>m;
vector<pair<ll,ll>>v;
for (ll i=0;i<n;i++){
    ll f;
    cin>>f;
    v.psb({f,0});
}
for (ll i=0;i<m;i++){
    ll c;
    cin>>c;
    v.psb({c,1});
}


sort(v.begin(),v.end());

ll cnt=0;
ll tofm=0;

for(auto[time,type]:v){
    if(type!=tofm){
        cnt++;
        tofm=(1-tofm);
    }
}

cout<<cnt<<'\n';
}

return 0;
}