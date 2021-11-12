#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int sum=0;
for (int i=0;i<n;i++){
    sum+=a[i];
}
int g=(sum/k);
int r=(sum%k);
int b=k-r;
int l=(sum-(g*min(r,b)));
int z=(l/max(r,b));
int t=0;
for (int i=0;i<min(r,b);i++){
    t+=pow(g,2);
}
for (int i=0;i<max(r,b);i++){
    t+=pow(z,2);
}

cout<<t;

return 0;
}
