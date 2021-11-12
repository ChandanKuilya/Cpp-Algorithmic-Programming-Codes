#include<bits/stdc++.h>
using namespace std;
int covidtracker(int n,int k,int x){
    if (n==1){
        return x;
    }
    int p=covidtracker(n-1,k,x);
   int res=(p+k)%n;

return res;
}

int main(){
int t;
cin>>t;
for (int i=0;i<t;i++){
int n,k,x,y;
cin>>n>>k>>x>>y;
while(y==covidtracker(n,k,x)){
    cout<<"NO"<<endl;
    break;
}
while(y!=covidtracker(n,k,x)){
    cout<<"YES"<<endl;
    break;
}
}

return 0;
}
