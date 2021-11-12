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
#define ifl(i,a,b) for(int i=a;i<=b;i++)
#define inf(i,a,b) for(int i=a;i<b;i++)
#define irf(i,a,b) for(int i=b-1;i>=a;i--)
#define psb push_back
#define ppb pop_back
#define mpr make_pair

bool compare(ll a, ll b) 
{ 
    return (a < b); 
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll n,m;
cin>>n>>m;
ll a[m];
char s[n][m];
nf(i,0,n){
    nf(j,0,m){
        cin>>s[i][j];
    }
}
nf(j,0,m){
    cin>>a[j];
}
vector<ll>v;
nf(i,0,m){
    ll cnta=0;
    ll cntb=0;
    ll cntc=0;
    ll cntd=0;
    ll cnte=0;
    nf(j,0,n){
        if(s[j][i]=='A')cnta++;
        if(s[j][i]=='B')cntb++;
        if(s[j][i]=='C')cntc++;
        if(s[j][i]=='D')cntd++;
        if(s[j][i]=='E')cnte++;
    }
    ll maximum=max({cnta,cntb,cntc,cntd,cnte},compare);
    ll ans=a[i]*maximum;
    v.psb(ans);
}
ll fans=0;
nf(j,0,v.size()){
    fans+=v[j];
}
cout<<fans;
return 0;
}
*/


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
ll n;
cin>>n;
ll a[n];
nf(i,0,n){
  cin>>a[i];
}
sort(a,a+n);
ll subsum=0;
nf(i,0,n-1){
    subsum+=a[i];
}
ll totalsum=subsum+a[n-1];
if(totalsum%2==0 && subsum>=a[n-1]){
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;
}
