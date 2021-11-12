#include<bits/stdc++.h>
using namespace std;
int main(){
int s=0,n,k;
cout<<"Enter the number of terms: ";
cin>>n;
for (int i=1;i<=n;i++){
    k=1;
    for (int j=1;j<=i;j++){
        k=k*j;
    }

    s=s+k;
}
cout<<"The sum is: "<<s<<endl;
return 0;
}
