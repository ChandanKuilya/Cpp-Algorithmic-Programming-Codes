//1.
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll mp(ll n,ll a[],ll m){
    ll pos;
    vector<ll>v;
    for (ll i=m;i<=n;i++){
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
   for (ll i=m;i<=n;i++){
        if(v[0]==a[i]){
              pos=i;
              break;
        }
    }
    return pos;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
for (ll j=1;j<=t;j++){
ll n;
cin>>n;
ll a[n];

for (ll i=1;i<=n;i++){
  cin>>a[i];
}
ll x,y;
ll ans=0;
for (x=1;x<=n-1;x++){
    y=mp(n,a,x);
    swap(a[x],a[y]);
    if(is_sorted(a,a+n)){
        ans++;
        break;
    }
    if(!is_sorted(a+1,a+n+1)){
          ans+=abs(x-y)+1;
    }
  
}

cout<<"case "<<"#"<<j<<": "<<ans<<'\n';
}
return 0;
}
*/

//2.


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








cout<<"case "<<"#"<<j<<": "<<ans<<'\n';
}

return 0;
}