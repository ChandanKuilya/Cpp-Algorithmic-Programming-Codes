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


const ll modulo=1e9+7;

ll modularexponetial(ll a, ll b, ll mod) {
    if(a==0)return 0;
    ll res = 1; 
    while (b > 0) {
        if (b & 1){
        res = (res * a) % mod; 
        }
        a = (a * a) % mod;
        b = b >> 1;
     } 
     return res;
    }



int main(){
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
nf(i,0,t){
 ll n,k;
 cin>>n>>k;

 ll ans;

 ans=modularexponetial(n,k,modulo);

cout<<ans<<'\n';
}

return 0;
}