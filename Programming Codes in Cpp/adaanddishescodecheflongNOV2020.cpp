#include<bits/stdc++.h>
using namespace std;

int main(){
int t,m,n;
cin>>t;
for (int j=0;j<t;j++){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 switch(n){
  case 1:
      cout<<a[0]<<'\n';
      break;
  case 2:
     cout<<max(a[0],a[1])<<'\n';
     break;
  case 3:
      sort(a,a+n);
      cout<<max(a[0]+a[1],a[2])<<'\n';
      break;
  case 4:
      sort(a,a+n);
      m=max(a[1]+a[2],a[0]+a[3]);
      n=max(a[0]+a[1]+a[2],a[3]);
      cout<<min(m,n)<<'\n';
      break;
 }
}
return 0;
}

