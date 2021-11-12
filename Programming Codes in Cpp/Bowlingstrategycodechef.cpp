#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k,l;
cin>>t;
for (int i=0;i<t;i++){
    cin>>n>>k>>l;
    if(n<=k){
       for(int i=1;i<=n;i++){
           cout<<i<<" ";
       }
}
 while(n>k){
    if(l==1){
        cout<<-1;
        break;
    }

    if (l>=2){
        for (int i=1;i<=k;i++){
            cout<<i<<" ";
        }

    }


 }


}



return 0;
}
