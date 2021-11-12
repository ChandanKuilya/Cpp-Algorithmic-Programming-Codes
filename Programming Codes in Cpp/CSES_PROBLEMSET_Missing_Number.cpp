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

 ll n;
 cin>>n;
ll x;
vector<ll>v;
for (ll i=1;i<=n-1;i++){
    cin>>x;
    v.psb(x);
}
sort(v.begin(),v.end());
ll ind;
for (ll i=1;i<=v.size()-1;i++){
   if((v[i+1]-v[i])>1){
         ind=i;
         break;
   }
}
cout<<(v[ind]+1);

return 0;
}
