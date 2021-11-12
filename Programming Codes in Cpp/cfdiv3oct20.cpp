#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m,k;
int s=0;
cin>>n>>m>>k;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
sort(a[i],a[i]+n);
}
for(int i=0;i<n;i++){
s+=(a[i][m-i-1]+a[i][m-i-2]);
if (s%k==0){
    cout<<s;
    break;
}
}
cout<<s;
return 0;
}

