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
nf(j,0,t){
  ll a,b,c;
  cin>>a>>b>>c;
  ll x,y;
  x=pow(10,a-1)+pow(10,c-1);
  y=pow(10,b-1);

  cout<<x<<" "<<y<<'\n';
}

return 0;
}