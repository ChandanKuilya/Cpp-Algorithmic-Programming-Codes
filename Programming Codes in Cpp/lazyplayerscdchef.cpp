#include<bits/stdc++.h>
using namespace std;

int main(){
int n,l;
cin>>n>>l;
int a[n][n];
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int ans=0;
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        ans+=a[i][j];
        while(ans==l){
            break;
        }
    }
}
if (ans==0){
    cout<<"IMPOSSIBLE";
}
else{
    cout<<"POSSIBLE";
}
return 0;
}
