 /*
 You are given a number n.
1. Print the number produced on setting its i-th bit.
2. Print the number produced on unsetting its j-th bit.
3. Print the number produced on toggling its k-th bit.
4. Also, Check if its m-th bit is on or off. Print 'true' if it is on, otherwise print 'false'.
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,k,m;
cin>>n;
cin>>i;
int onmask=(1<<i);
cout<<(n|onmask)<<endl;
cin>>j;
int offmask=~(1<<i);
cout<<(n&offmask)<<endl;
cin>>k;
int tooglemask=(1<<k);
cout<<(n^tooglemask)<<endl;
cin>>m;
int checkmask=(1<<m);
cout<<((n & checkmask)==0?"false":"true");

return 0;
}
*/
/*
You are given a number n.
 You have to print the right-most set bit mask.
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

// rmsbtm means:Right-most set bit mask.
int rmsbtm=(n & (~n+1));  // or we can simply write int rmsb=(n & -n);Because n's,2's complement can be deducted simply as -n.
cout<<"The  rightmost set bit mask in binary is:"<<bitset<8>(rmsbtm).to_string();

return 0;
}
*/

/*
Kernighan's Algorithm:
You are given a number n.
 You have to count the number of set bits in the given number:
 */

/*
 #include<bits/stdc++.h>
 using namespace std;
 int main(){

 int n,cnt=0;
 cin>>n;
 //      for (int i=0;;i++){
 //        int rmsbtm = (n & (~n+1));
 //        n=n-rmsbtm;
 //        cnt++;
 //        if(n==0)
 //          break;
 //        }
 while (n!=0){
 int rmsbtm = (n & (~n+1));
 n=n-rmsbtm;
 cnt++;
 }
 cout<<"The number of set bits in the entered number is: "<<cnt;

 return 0;
 }
*/

