#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define psb push_back



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll t;
cin>>t;
for (ll j=1;j<=t;j++){
 ll n;
 cin>>n;
 string s;
 cin>>s;
 
 //string s1;
 string s1;
 vector<ll>v(n);
 for (ll i=1;i<=n-1;i++){
     //string s1;
     if(s[i+1]>s[i]){
         s1.psb(s[i]);
         s1.psb(s[i+1]);
 }
 else{
     s1.psb(s[i]);
 }
 v.psb(s1.length()); 
 }
  
cout<<"case "<<"#"<<j<<": ";

for (ll i=1;i<=n;i++){
    cout<<v[i]<<" ";
}
cout<<'\n';
}

return 0;
}