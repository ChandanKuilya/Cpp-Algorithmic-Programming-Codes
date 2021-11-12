#include<bits/stdc++.h>
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

/*ll sumoa(ll a[],ll &n){
    ll sum=0;
    nf(i,0,n){
        sum+=a[i];
    }
    return sum;
}*/

bool twoArrEqual(ll arr1[], ll n,ll arr2[],ll m) 
{ 
   if (n!=m) {
        return false;
    }
  
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    for (ll i=0;i<n;i++){
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


ll t;
cin>>t;
nf(j,0,t){
 ll n,m;
 cin>>n>>m;
 ll a[n];
 ll b[m];
 nf(i,0,n){
    cin>>a[i];
 }
 nf(i,0,m){
    cin>>b[i];
 }
if(twoArrEqual(a,n,b,m)){
    cout<<-1<<'\n';
}
/*
if(sumoa(a,n)>sumoa(b,m)){
    cout<<0<<'\n';
}

ll cnt=0;
nf(i,0,n){
   nf(j,0,m){
    if(sumoa(a,n)<=sumoa(b,m)){
        sort(a,a+n);
        sort(b,b+m);
    swap(a[i],b[m-1-j]);
    cnt++;
    }
 }
 }*/
 //cout<<cnt<<'\n';
}

return 0;
}