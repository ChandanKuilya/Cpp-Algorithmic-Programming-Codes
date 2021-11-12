#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
ll t;
cin>>t;
for (ll i=0;i<t;i++){
string s;
cin>>s;
ll size=INT_MAX;
vector<pair<char,ll>>v;
ll k=-1;
for (ll i=0;i<s.length();i++){
    if(k==-1 || s[i]!=v[k].first){
        v.push_back({s[i],1});
        k++;
    }
    else{
        v[k].second++;
    }
}

for (ll i=1;i<k;i++){
 if(v[i-1].first!=v[i+1].first){
     size=min(size,(v[i].second)+2);
 }
}
if(size!=INT_MAX){
    cout<<size<<'\n';
}
else{
    cout<<0<<'\n';
}

}
return 0;
}