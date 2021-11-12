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
nf(i,0,t){
    ll r,b,d;
    cin>>r>>b>>d;
ll r1=r;
ll b1=b;
if(r1==1 || b1==1){
    if(abs(r1-b1)<=d)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
else{
if(abs(abs(r1-b1)-min(r1,b1))<=d)cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}

}

return 0;
}





/*
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
nf(i,0,t){
    ll n,m,k;
    cin>>n>>m>>k;

 ll i=1;
 ll j=1;

 while(i!=n && j!=m){
     if(i<n)i++;
     if(j<m)j++;
    
 }









    if ((abs(n-1)+abs(m-1))*(m+1)==k)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}

return 0;
}
*/