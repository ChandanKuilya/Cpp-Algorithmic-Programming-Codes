#include<bits/stdc++.h>
using namespace std;
bool existingpair(int a[],int n,int x){
int p=0;
int q=n-1;
    while(p<q){
        if (a[p]+a[q]==x){
             return true;
          }
        else if(a[p]+a[q]<x){
            p++;
        }
        else{
           q--;
        }
    }
return false;
}

int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int s;
cout<<"Enter the sum: ";
cin>>s;
if (existingpair(a,n,s)==true)
    cout<<"There exists such pair";
else
     cout<<"There is no such pair";

return 0;
}
