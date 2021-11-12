
#include<bits/stdc++.h>
using namespace std;
/*int sum(int a[],int n,int x){
  int i=0;
  int j=n-1;
  int cnt=0;
while (i<j){
    if (a[i]^a[j]==x){
        cnt++;
    }
    else if(a[i]^a[j]<x){
        i++;
    }
    else{
        j--;
    }
}
return cnt;
}
*/

int main(){
int t;
cin>>t;
int n,k,x;
for (int i=0;i<n;i++){
    cin>>n>>k>>x;
/*
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
 if (sum(a,n,x)==k){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
}
}
return 0;
}
