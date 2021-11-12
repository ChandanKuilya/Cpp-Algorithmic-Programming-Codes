#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll M=1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll n;
cin>>n;
ll c[n+1];
c[0]=0;
for(ll i=1;i<=n;i++){
    cin>>c[i];
}
vector<ll>v;
v[0]=0;
for(ll i=1;i<=n;i++){
    v.push_back(c[i]);
}
vector<vector<ll>>v1;

for(ll i=1;i<=n;i++){
    v.push_back(c[i]);
}



return 0;
}