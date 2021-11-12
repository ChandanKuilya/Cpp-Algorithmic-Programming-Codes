#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll M=1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll t;
cin>>t;
for(ll i=1;i<=t;i++){

ll n,m;
cin>>n>>m;

ll a[n][2];
ll s[m];

vector<ll>v;

for(ll i=0;i<n;i++){
    for(ll j=1;j<2;j++){
        cin>>a[i][j];
        v.push_back(a[i][j]);
    }
}
for(ll i=0;i<m;i++){
     cin>>s[i];
}









ll ans=0;


cout<<"case "<<"#"<<i<<": "<<ans<<'\n';

}


return 0;
}