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
  ll n,m,x;
  cin>>n>>m;
  vector<ll>v[n];
  vector<ll>a[n];
  nf(i,0,n){
      nf(j,0,m){
          cin>>x;
          v[i].psb(x);
      }
  }
   
nf(i,0,n){
    sort(v[i].begin(),v[i].end());
}

nf(i,0,m){
ll min=INT_MAX;
ll ind=-1;
    nf(j,0,n){
        if(v[j][0]<min){
            min=v[j][0];
            ind=j;
        }
    }
    nf(j,0,n){
        if(ind==j){
            a[j].psb(v[j][0]);
            v[j].erase(v[j].begin());

        }
        else{
            a[j].psb(v[j][v[j].size()-1]);
            v[j].ppb();
        }
    }

}

nf(i,0,n){
    nf(j,0,a[i].size()){
        cout<<a[i][j]<<" ";
}
cout<<'\n';
}


}

return 0;
}
