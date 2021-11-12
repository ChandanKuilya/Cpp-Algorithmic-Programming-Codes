//Fibonocci:
/*
#include<bits/stdc++.h>
using namespace std;
#define ll  int

int fib1r(ll n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fib1r(n-1)+fib1r(n-2);
}

int fibdpr(ll n,ll a[]){
     if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
  if(a[n]>0){
      return a[n];
  }
    ll output=fibdpr(n-1,a)+fibdpr(n-2,a);

   a[n]=output;
   return output;

}
ll fibdpi(ll n){
    ll *arr=new ll[n+1];
    arr[0]=0;
    arr[1]=1;

    for(ll i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
 ll output=arr[n];
 delete [] arr;
 return output;
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for (ll i=0;i<n;i++){
        a[i]=0;
    }

    for (ll i=0;i<=n;i++){
        cout<<i<<" th fibonocci number is: "<<fibdpi(i)<<'\n';
       
    }

return 0;
}

*/





//VERY GOOD AND CRUCIAL CONCEPT:


/*
void reev(ll n,ll a[]){
    for (ll i=0;i<n;i++){
        a[i]=i+7;
    }
}

int main(){
    ll n;
    cin>>n;
    ll a[n];

     for (ll i=0;i<n;i++){
        a[i]=0;
    }
  reev(n,a);
    for (ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
*/

//ATCODER DP SERIES:

//PROBLEM A:

#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const ll INF=1e18+5;

int main(){

   ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

ll n,k;
cin>>n>>k;
vector<ll>dp(n,INF);
ll h[n];

for (ll i=0;i<n;i++){
    cin>>h[i];
}
dp[0]=0;

for (int i = 0; i < n; i++) { 
    for (int j = i + 1; j <= i + k; j++) {  
     if (j < n){
        dp[j] = min(dp[j],dp[i]+abs(h[j]-h[i]));
     }
        }
}

cout<<dp[n-1];

return 0;
}