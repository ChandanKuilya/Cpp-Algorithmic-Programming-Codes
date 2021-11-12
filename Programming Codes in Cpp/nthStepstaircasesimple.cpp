#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cntnumofways(ll n){
    ll res[n+1];
    res[0]=1;
    res[1]=1;
    res[2]=2;
    for(ll i=3;i<=n;i++){
        res[i]=res[i-1]+res[i-2]+res[i-3];
    }
  return res[n];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll n;
cin>>n;
cout<<"Total number of ways to climb the nth step is: "<<cntnumofways(n)<<'\n';

return 0;
}