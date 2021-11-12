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



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll t;
cin>>t;
nf(c,0,t){
  ll h,w;
  cin>>h>>w;
  ll a[h][w];      //ll a[h+3][w+3];
   nf(i,0,h){
      nf(j,0,w){
          a[i][j]=0;
      }
   }

  for(ll j=0;j<w;j+=2)a[0][j]=1;
  for(ll i=2;i<h;i+=2){
      a[i][0]=1;
      a[i][w-1]=1;
  }
  for(ll j=2;j<w-2;j+=2)a[h-1][j]=1;

  nf(i,0,h){
      nf(j,0,w){
          cout<<a[i][j];
      }
      cout<<'\n';
  }
cout<<'\n';
}

return 0;
}



/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n+5][m+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                ar[i][j]=0;
            }
        }
       for(int i=0;i<m;i+=2)ar[0][i]=1;
       for(int j=2;j<n;j+=2)
       {
           ar[j][0]=1;
           ar[j][m-1]=1;
       }
       for(int i=2;i<m-2;i+=2)ar[n-1][i]=1;
 
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++){
               cout<<ar[i][j];
           }
           cout<<'\n';
       }
 
    }
    return 0;
}
*/