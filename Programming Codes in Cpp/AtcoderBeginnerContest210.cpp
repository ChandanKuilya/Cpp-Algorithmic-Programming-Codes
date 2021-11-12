// Problem C:

#include <bits/stdc++.h>
using namespace std;
#define ll int 
#define ld long double
#define ull unsigned long long
#define pll pair<ll,ll>
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)
#define psb push_back
#define ppb pop_back
#define mpr make_pair
ll mod=1e9+7;



/*
ll maxuniqueNum(ll a[],ll N,ll M)
{
    ll maxUnique=0;

    for(ll i=0;i<N-M;i++)
    {
        set<ll> s;
        for(ll j=0;j<M;j++)
        {

            s.insert(a[i+j]);
        }
    
        if(s.size()>maxUnique)
        {
            maxUnique=s.size();
        }
    }
    return maxUnique;
}
*/

int maxuniqueNum(int a[],int N,int M)
{
    
    map<int,int> hash;
    
    int dist_count=0;    
    int res=0;     
    for(int i=0;i<M;i++)
    {
        
        if(hash.find(a[i])==hash.end())
        {
            hash.insert(make_pair(a[i],1));
            dist_count++;
        }
       
        else
        {
           
            hash[a[i]]++;
        }
    }
    res=dist_count;
   
    for(int i=M;i<N;i++)
    {
        if(hash[a[i-M]]==1)
        {

            hash.erase(a[i-M]);
            dist_count--;
        }
        else
        {
        
            hash[a[i-M]]--;
        }
        
        if(hash.find(a[i])==hash.end())
        {
            hash.insert(make_pair(a[i],1));
            dist_count++;
        }
        
        else
        {
            hash[a[i]]++;
        }

        res=max(res,dist_count);
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll n,k;
cin>>n>>k;
ll a[n];
nf(i,0,n){
    cin>>a[i];
}
cout<<maxuniqueNum(a,n,k)<<'\n';

return 0;
}











/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define pll pair<ll,ll>
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)
#define psb push_back
#define ppb pop_back
#define mpr make_pair
ll mod=1e9+7;




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
ll n,a,x,y;
cin>>n>>a>>x>>y;
if(n>a){
cout<<(a*x+(n-a)*y)<<'\n';
}
else
{
   cout<<(n*x)<<'\n';

}

return 0;
}
*/

