#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll t;
cin>>t;
for (ll j=1;j<=t;j++){
    ll n,k;
    cin>>n>>k;
    char s[n];
    for(ll i=1;i<=n;i++){
        cin>>s[i];
    }
    ll gn=0;

    for (ll i=1;i<=n/2;i++){
        if(s[i]!=s[n-i+1]){
              gn++;
        }
    }
    if(gn==k){
        cout<<"case "<<"#"<<j<<": "<<0<<'\n';
    }
    if(gn!=k){
        cout<<"case "<<"#"<<j<<": "<<abs(k-gn)<<'\n';
    }
}

return 0;
}