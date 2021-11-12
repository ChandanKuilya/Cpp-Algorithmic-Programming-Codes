#include<bits/stdc++.h>
using namespace std;
void subarrays(int a[],int n){
  int cnt=0;
 for (int i=0;i<n;i++){
    for (int j=i;j<n;j++){
        for (int k=i;k<=j;k++){
            cout<<a[k]<<" ";
        }
        cnt++;
        cout<<endl;
        cout<<"Number of subarrays til now: "<<cnt<<endl;
    }
 }


}
int main(){

int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
subarrays(a,n);

return 0;
}
