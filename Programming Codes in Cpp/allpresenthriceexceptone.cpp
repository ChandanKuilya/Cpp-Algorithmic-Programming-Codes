#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}

int tn=INT_MAX,tnp1=0,tnp2=0;

for (int i=0;i<n;i++){
    int cwtn=a[i]&tn;
    int cwtnp1=a[i]&tnp1;
    int cwtnp2=a[i]&tnp2;
tn=(tn & (~cwtn));
tnp1=(tnp1 | cwtn);

tnp1=(tnp1 & (~cwtnp1));
tnp2=(tnp2 | cwtnp1);

tnp2=(tnp2 & (~cwtnp2));
tn=(tn | cwtnp2);
}

cout<<"The unique element which present only once,not thrice,is: "<<tnp1;

return 0;
}
