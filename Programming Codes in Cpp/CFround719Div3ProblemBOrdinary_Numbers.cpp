#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define pll pair<ll,ll>
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=b-1;i>=a;i--)
#define psb push_back
#define ppb pop_back
#define mpr make_pair




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
nf(tc,0,t){
  ll n;
  cin>>n;
  ll cnt=0;
for(ll i=1;i<=n;i=((i*10)+1)){
    for(ll j=1;j<=9;j++){
          if((i*j)<=n){
              cout<<(i*j)<<'\n';
              cnt++;
          }
    }
}
   cout<<cnt<<'\n';
}

return 0;
}
