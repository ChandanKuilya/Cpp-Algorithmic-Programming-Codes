#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll M=1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll t;
cin>>t;
for(ll i=1;i<=t;i++){

ll g1,g2,g3,g4,g6,g7,g8,g9;

cin>>g1>>g2>>g3;
cin>>g4>>g6;
cin>>g7>>g8>>g9;

ll a[4]={g1+g9,g3+g7,g2+g8,g4+g6};
sort(a,a+4);
ll ans=0;
for(ll i=0;i<3;i++){
    if(a[i]==a[i+1])ans=a[i];
}

if(ans!=0)
cout<<"case "<<"#"<<i<<": "<<((ans/2)-1)<<'\n';
else{
cout<<"case "<<"#"<<i<<": "<<ans<<'\n';
}

}


return 0;
}