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


// Function to check is all the
// characters in string are or not
int allCharactersSame(ll n)
{
    
       string s=to_string(n);

    set <char> s1;
   
    // Insert characters in the set
    for ( int i=0 ; i < s.length() ; i++)
        s1.insert(s[i]);
     
    // If all characters are same
    // Size of set will always be 1
    if ( s1.size() == 1 )
         return 1;
    else
        return 0;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//vector<ll>v;

ll t;
cin>>t;
for (ll j=0;j<t;j++){
  ll n;
    cin>>n;
   ll cnt=0;
   string num;
for(ll i=1;i<=n;i++){
    if(allelementsareSame(i)==1)cnt++;
 }
  cout<<cnt<<'\n';
}

return 0;
}
