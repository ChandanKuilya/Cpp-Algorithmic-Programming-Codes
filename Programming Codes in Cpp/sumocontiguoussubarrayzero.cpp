#include<iostream>
using namespace std;
int numofsub(int i,int s,int t,int a[],int n){

 if (i==n){
    if (s==0 && t>0){
        return 1;
    }
    else{
        return 0;
    }
 }
  int res=0;
 res += numofsub(i+1,s,t,a,n);

 res += numofsub(i+1,s+a[i],t+1,a,n);

return res;
}
int main(){
 int n;
 cin>>n;
 int a[n];
 for (int i=0;i<n;i++){
    cin>>a[i];
 }
cout<<numofsub(0,0,0,a,n);
return 0;
}
