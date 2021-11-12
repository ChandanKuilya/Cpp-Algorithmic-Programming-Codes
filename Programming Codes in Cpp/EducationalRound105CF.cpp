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
nf(i,0,t){
int n;
cin>>n;
int a[4];
for (int i=0;i<4;i++){
    cin>>a[i];
}
 int cnt=0;
 int cnt1=0;
for (int i=0;i<4;i++){ 
if(a[i]==n){
        cnt++;
}
}
for (int i=0;i<4;i++){
if(a[i]<n && a[i]==a[i+1]){
        cnt1++;
}
}

    if(cnt==n){
        cout<<"YES"<<'\n';
    }
    if((cnt+1)<n){
        cout<<"NO"<<'\n';
    }

 
}

return 0;
}
