//Xorwise(Problem:A)

#include<bits/stdc++.h>
using namespace std;
int minsum(int a,int b){
   int p=0,ans=0;
   while(a||b){
    if ((a&1) && (b&1)){
        ans+=(1<<p);
    }
    a>>=1;
    b>>=1;
    p+=1;
   }
 return ans;
}
int main(){
int t;
cin>>t;
for (int i=0;i<t;i++){
    int a,b;
    cin>>a>>b;

int x=minsum(a,b);
cout<<(a^x)+(b^x)<<endl;
}
return 0;
}
