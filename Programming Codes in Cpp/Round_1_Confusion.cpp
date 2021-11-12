/*
#include<iostream>
using namespace std;

int main(){
	int t;
    cin>>t;
    int a[1000][3];
for (int i=0;i<t;i++){
  for (int j=0;j<3;j++){
    cin>>a[i][j];
}
}

for (int i=0;i<t;i++){
   for (int j=0;j<1;j++){
     int ans=a[i][j]/a[i][j+1]-a[i][j+2]/a[i][j+1];
      cout<<ans;
 }
 cout<<endl;
}

return 0;
}
*/


//  EBAR THEKE QUESTION VALO KORE PORBI............NOILE EROKOM VIGUR DADU HOYE JABE(OPORER SOLUTION TAR MOTO);

#include<iostream>
using namespace std;
int main(){
int t,n,k,x;
cin>>t;
for (int i=0;i<t;i++){
    cin>>n>>k>>x;
cout<<(n-x)/k<<endl;
}
return 0;
}
