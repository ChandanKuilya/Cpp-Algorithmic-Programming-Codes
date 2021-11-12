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
while(t--){
    ll n,q;
    cin>>n>>q;
    ll a[n];
    f(i,1,n){
        cin>>a[i];
    }

    ll fa[n];
    ll ba[n];

    fa[0]=ba[n+1]=0;

    f(i,1,n){
        fa[i]=__gcd(fa[i-1],a[i]);
    }
    for(ll i=n;i>=1;i--){
        ba[i]=__gcd(ba[i+1],a[i]);
    }
 while(q--){
     ll l,r;
     cin>>l>>r;

    cout<<__gcd(fa[l-1],ba[r+1])<<'\n';

 }
}
return 0;
}
