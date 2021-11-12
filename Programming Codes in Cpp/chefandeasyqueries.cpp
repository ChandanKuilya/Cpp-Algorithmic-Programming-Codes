#include<bits/stdc++.h>
using namespace std;
int eqry(int a[],int n){
  int s=0;
  for (int i=0;i<n;i++){
    s+=a[i];
  }

}
int main(){
int t,n,k;
cin>>t;
for(int j=0;j<t;j++){
cin>>n>>k;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
 int s=0,cnt=0;
  for (int i=0;i<n;i++){
    s+=a[i];
    if (s>k)
    cnt++;
  }
}
return 0;
}
