// ::THESE ALL APPROACHES ARE FOR POSITIVE INTEGERS ONLY::
//USING RECURIVE FUNCTION:
/*
#include<bits/stdc++.h>
using namespace std;
int numofsetbit(int n){
    if (n==0)
     return 0;
   else
     return (n&1)+numofsetbit(n>>1);
}

int main(){
int m;
cout<<"Enter the integer: ";
cin>>m;
cout<<"The number of set bits in the entered integer is: "<<numofsetbit(m);

return 0;
}
*/
//SIMPLE APPROACH:

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int m;
int count=0;
cout<<"Enter the integer: ";
cin>>m;
while(m>0){
   if(m&1>0){
     count++;
     m>>=1;
   }
}
cout<<"The number of set bits in the entered integer is: "<<count<<endl;

return 0;
}

*/
//3 RD APPROACH:

#include<bits/stdc++.h>
using namespace std;

int main(){
int m;
int count=0;
cout<<"Enter the integer: ";
cin>>m;
while(m>0){
     count++;
     m &= (m-1);
}
cout<<"The number of set bits in the entered integer is: "<<count<<endl;

return 0;
}
