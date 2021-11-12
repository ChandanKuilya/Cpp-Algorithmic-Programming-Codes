#include<bits/stdc++.h>
using namespace std;
/*
int mex(int a[],int n){
/*
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
*/
/*
sort(a,a+n);
if (a[0]==1)
     return 2;
if (a[0]>1)
  return (a[0]-1);
}
*/
int mex(vector<int>v){
   int fn;
  sort(v.begin(),v.end());

if (v[0]==1)
     fn=2;
if (v[0]>1)
  fn=(v[0]-1);

return fn;

}
int mexsubarrays(int a[],int n){
    int res;
    int fa;
    vector<int>v1;
    vector<int>v2;
  for (int i=0;i<n;i++){
    for (int j=i;j<n;j++){
        for (int k=i;k<=j;k++){
            v1.push_back(a[k]);
        }
        res=mex(v1);
    }
    v2.push_back(res);
  }

fa=mex(v2);
return fa;
}
int main(){

int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
cout<<mexsubarrays(a,n);

return 0;
}
