#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll t;
cin>>t;
for (ll j=1;j<=t;j++){
ll n,b;
cin>>n>>b;
ll a[n];

for (ll i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);

ll cnt=0;

for (ll i=0;i<n;i++){
    if(a[i]<=b){
         cnt++;
         b-=a[i];
    }
}

 cout<<"case "<<"#"<<j<<": "<<cnt<<'\n';
    
}

return 0;
}