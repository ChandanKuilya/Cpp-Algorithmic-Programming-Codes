#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
string s;
cin>>s;
ll ans=0;
f(i,0,s.length()){
  if (s[i]=='1')ans+=a1;
  if (s[i]=='2')ans+=a2;
  if (s[i]=='3')ans+=a3;
  if (s[i]=='4')ans+=a4;
}
cout<<ans;
return 0;
}
