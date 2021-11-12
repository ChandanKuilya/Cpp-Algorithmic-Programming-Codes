#include<bits/stdc++.h>
using namespace std;
int main(){
int i,s=0,n;
cout<<"Enter how many times loop should run: ";
cin>>n;
for (i=0;i<5;i++){
    cout<<i;
    s++;
if (i==4){
    i=-1;
    cout<<endl;
}
  if (n==s) {
    break;
  }
}
 return 0;

}






