//28 th March 2021:

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
for (ll j=0;j<t;j++){
ll n,m;
cin>>n>>m;
map<ll,ll>mp;
vector<ll>v;
ll elm;
ll pt=1;


for (ll i=0;i<n;i++){
    cin>>elm;
    mp[elm]++;
    v.push_back(elm);
}

for (ll i=0;i<m;i++){
    cin>>elm;
    mp[elm]=0;
    v.push_back(elm);
}
/*
ll s=max(f[n-1],c[m-1]);
ll s1=(n+m);

vector<ll>v;

for (ll i=0;i<n;i++){
    v.push_back(f[i]);
}
for (ll i=0;i<m;i++){
    v.push_back(c[i]);
}
*/
/*
ll cnt=0;

sort(v.begin(),v.end());

for (auto i:v){
    if(mp[i]!=pt){
        if(pt==1){
            pt=0;
        }
        else{
            pt=1;
        }
        
        cnt++;
    }
}

cout<<cnt<<'\n';
}

return 0;
}
*/


//Problem:Server Trouble:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define psb push_back
#define ppb pop_back

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
for (ll i=0;i<t;i++){
    ll n,k;
    cin>>n>>k;

if(n%k==0){
    cout<<(n/k)<<" "<<k<<'\n';
}

else{
    cout<<((n/k)+1)<<" "<<(n%k)<<'\n';
}

}

return 0;
}
