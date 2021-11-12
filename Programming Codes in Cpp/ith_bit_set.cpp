#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n,i;
while(t--){
   cin>>n>>i;
int f=1;
f=f<<i;
int res=n&f;
if (res==0)
   cout<<"false";
else
  cout<<"True";
}
return 0;
}



