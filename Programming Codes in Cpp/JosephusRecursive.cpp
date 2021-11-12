#include<bits/stdc++.h>
using namespace std;
int safeper(int n,int k){
   if (n==1){
    return 0;
   }
  int x=safeper(n-1,k);
  int ans=(x+k)%n;

return ans;
}
int main(){
int n,k;
cout<<"Enter the total number of soldiers: ";
cin>>n;
cout<<"Enter the position of the soldier,which is executed in each turn: ";
cin>>k;
cout<<"The soldier who will survive,is at the position: "<<safeper(n,k);
return 0;
}
