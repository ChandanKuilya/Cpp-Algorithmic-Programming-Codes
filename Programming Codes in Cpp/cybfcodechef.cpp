#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define pll pair<ll,ll>
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=b-1;i>=a;i--)
#define ifl(i,a,b) for(int i=a;i<=b;i++)
#define inf(i,a,b) for(int i=a;i<b;i++)
#define irf(i,a,b) for(int i=b-1;i>=a;i--)
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
  ll n,q;
cin>>n>>q;
ll a[n];
f(i,1,n){
  a[i]=0;
}
f(j,1,q){
ll l,r;
cin>>l>>r;
f(i,l,r){
    a[i]+=(i-l+1);
}

}
f(i,1,n){
    cout<<a[i]<<" ";
}
  cout<<"\n" ;
}

return 0;
}