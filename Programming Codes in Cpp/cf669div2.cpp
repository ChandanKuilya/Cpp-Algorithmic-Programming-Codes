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
ll n;
cin>>t;
while(t--){
   cin>>n;
   ll a[n];
   f(i,1,n){
       cin>>a[i];
   }
  f(i,1,n){
      if(a[2i-1]=a[2i+1] && a[2i]==a[2i+2]){
          cout<<0<<'\n';
      }
  }
}









return 0;
}