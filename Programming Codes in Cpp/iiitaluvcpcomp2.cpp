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

const int N=1e5+10;
ll m=1e9+7;
int a[N];
int pfs[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int n;
cin>>n;
for (int i=1;i<=n;i++){
    cin>>a[i];
    pfs[i]=pfs[i-1]+a[i];
}
ll cnt=0;
for (int i=1;i<=n-2;i++){
    if(abs(a[i+1]-a[i-1])==abs(a[i+2]-a[i])){
        cnt++;
    }
}
cout<<cnt<<'\n';
return 0;
}
