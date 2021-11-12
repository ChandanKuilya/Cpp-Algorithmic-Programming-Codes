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

template<class T> T max(T a, T b, T c) {
    return max(a, max(b, c));
}

bool compare(ll a, ll b) 
{ 
    return (a < b); 
}

ll sumoa(ll a[],ll n){
    ll sum=0;
    nf(i,0,n){
        sum+=a[i];
    }
    return sum;
}

bool allelementsareSame(ll arr[],ll n){
  ll first = arr[0];
 
  for (ll i = 1; i < n; i++){
    if (arr[i] != first){
      return 0;
    }
  }
  return 1;
}


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
//vector<ll>v;
string s;
cin>>s;
string t;
for (ll i=1;i<=s.length();i++){
   if(s[i]=='R')reverse(t.begin(),t.end()); // Reverse in O(n);
      else{
       t.push_back(s[i]);
   }
}

for (ll i=1;i<=t.length()-1;i++){
    if(t[i]==t[i+1]){
       t.erase(t.begin() + i);
       t.erase(t.begin() + (i+1));
    }
}
cout<<t<<'\n';
return 0;
}
