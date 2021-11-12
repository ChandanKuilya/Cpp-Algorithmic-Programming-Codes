//SPACE ARRAYS:

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  ll t,n;
  cin>>t;
  for (ll j=0;j<t;j++){
    cin>>n;
    ll a[n];
   for (ll i=1;i<=n;i++){
    cin>>a[i];
  }
  sort(a+1,a+n+1);  // for sorting the elements in array a between index from i   to j, sort(a+i,a+j+1)
  ll cnt=0;
  ll chk=0;
 for (ll i=1;i<=n;i++){
    if(a[i]>i){
      chk++;
      break;
    }
  
    else{
      cnt+=(i-(a[i]));
    }
  
  }
  if(chk!=0){
    cout<<"Second"<<'\n';
  }
  else{
      if(cnt%2==0){
        cout<<"Second"<<'\n';
      }
     else{
       cout<<"First"<<'\n';
     }
  }

}

return 0;
}