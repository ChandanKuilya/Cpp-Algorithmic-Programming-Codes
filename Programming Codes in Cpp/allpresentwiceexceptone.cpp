/*
#include<iostream>
using namespace std;
int main(){
int a[7]={23,45,63,51,45,23,51};
int res=a[0];
for (int i=1;i<7;i++){
    res^=a[i];
}
cout<<res;
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements in the array(Which is indeed odd) : ";
cin>>n;
int a[n];
cout<<"The array is: ";
for (int i=0;i<n;i++){
    cin>>a[i];
}
int res=0;
for (int i=0;i<n;i++){
    res=(res^a[i]);
}
cout<<"The element which is present only once is: "<<res;
return 0;
}
