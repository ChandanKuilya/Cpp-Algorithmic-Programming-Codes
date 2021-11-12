#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)

void fillprefixsumarray(ll a[],ll z,ll prefixsumarray[],ll y){
   prefixsumarray[0]=a[0];
    f(i,1,z){
        prefixsumarray[i]=prefixsumarray[i-1]+a[i];
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll n;
cin>>n;
ll a[n+1];
a[0]=0;
f(i,1,n){
    cin>>a[i];
}
ll prefixsumarray[n+1];
ll m,t,l,r;
cin>>m;
f(i,1,m){
  cin>>t>>l>>r;

  if(t==1){
      fillprefixsumarray(a,n,prefixsumarray,n+1);
      cout<<prefixsumarray[r]-prefixsumarray[l-1]<<'\n';
  }
  if(t!=1){
      sort(a,a+n);
      fillprefixsumarray(a,n,prefixsumarray,n+1);
      cout<<prefixsumarray[r]-prefixsumarray[l-1]<<'\n';
  }


}

return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll n;
cin>>n;
ll a[n];
ll prefixsumarray1[n+1];
ll prefixsumarray2[n+1];

prefixsumarray1[0]=0;
prefixsumarray2[0]=0;

nf(i,0,n){
   cin>>a[i];
}
nf(i,0,n){
   prefixsumarray1[i+1]=prefixsumarray1[i]+a[i];
}

sort(a,a+n);

nf(i,0,n){
   prefixsumarray2[i+1]=prefixsumarray2[i]+a[i];
}

ll m,l,r,t;
cin>>m;
nf(i,0,m){
  cin>>t>>l>>r;
if(t==1){
    cout<<prefixsumarray1[r]-prefixsumarray1[l-1]<<'\n';
}
else{
    cout<<prefixsumarray2[r]-prefixsumarray2[l-1]<<'\n';
}

}

return 0;
}
*/




