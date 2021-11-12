#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
ll t;
cin>>t;
for (ll i=0;i<t;i++){
    ll n,e,h,a,b,c;
   cin>>n>>e>>h>>a>>b>>c;
  ll cak,ms,om;
  ll ans=1e18;
for (ll cak=0;cak<=n;cak++){
    if(e<cak or h<cak){
        break;
    }
  ms=(h-cak)/3;
  om=(e-cak)/2;

  if(ms+om+cak<n){
      continue;
  }
ll reqms,reqom;

if(a<b){
    reqom=min(om,n-cak);
    reqms=(n-cak-reqom);
}
else{
    reqms=min(ms,n-cak);
    reqom=(n-cak-reqms);
}

ll price=(a*reqom+b*reqms+c*cak);
ans=min(ans,price);
}

if(ans==1e18){
    ans=-1;
}
cout<<ans<<'\n';

}
return 0;
}
