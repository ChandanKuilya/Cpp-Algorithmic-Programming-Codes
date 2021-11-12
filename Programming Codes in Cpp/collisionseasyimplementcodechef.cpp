#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--){
int cnt=0;
int n,m;
cin>>n>>m;
int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
  for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (a[i][j]==a[i+1][j]==1){
               cnt++;
        }
    }
}

 cout<<cnt;
}

return 0;

}
