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
//vector<ll>v;
pair<ll,ll>p;
set<pair<ll,ll>>s;
ll n;
cin>>n;
ll a[n],b[n],c[n];
f(i,0,n-1){
    cin>>a[i];
}
f(i,0,n-1){
    cin>>b[i];
}
f(i,0,n-1){
    cin>>c[i];
}
ll cnt=0;
f(i,0,n-1){
    ll ans=a[i];
   f(j,0,n-1){
       ll ind=c[j];
        if(ans==b[ind])p=make_pair(i,j);
        s.insert(p);
   }
}
cout<<s.size();
return 0;
}
