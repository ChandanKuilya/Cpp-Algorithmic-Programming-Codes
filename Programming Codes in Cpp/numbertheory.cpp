//PRELIMARY TEST FOR FINDING PRIME NUMBERS IN O(n) time-complexity:
/*
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){

   if (n==0 or n==1){
       return false;
   }
   for (int i=2;i<n;i++){
         if (n%i==0){
            return false;
         }
   }


return true;

}
int main(){
int n;
cin>>n;
int ans=0;
for (int j=0;j<=n;j++){
    if (prime(j)==true){
        cout<<j<<endl;
        ans++;
        cout<<"Number of primes till now is: "<<ans<<endl;
    }
}

return 0;

}
*/


//PRELIMARY TEST FOR FINDING PRIME NUMBERS IN O(sqrt(n)) time-complexity:
/*
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){

   if (n==0 or n==1){
       return false;
   }
   for (int i=2;i*i<=n;i++){
         if (n%i==0)
            return false;
   }


return true;

}
int main(){
int n;
cin>>n;
int ans=0;
for (int j=0;j<=n;j++){
    if (prime(j)==true){
        cout<<j<<endl;
        ans++;
        cout<<"Number of primes till now is: "<<ans<<endl;
    }
}

return 0;

}
*/


//SIEVE OF ERATOSTHENES;
/*
#include<bits/stdc++.h>
using namespace std;
void sieveofEratos(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

     for (int p=2;p*p<=n;p++){
        if (prime[p]==true){
            for (int j=p*p;j<=n;j+=p){
                 prime[j]=false;
            }
        }
     }
int ans=0;
     for (int i=2;i<=n;i++){
             if (prime[i]==true){
                cout<<i<<endl;
                ans++;
            cout<<"Number of primes till now is: "<<ans<<endl;

             }
     }

}
int main(){
int n;
cin>>n;
cout<<"The prime numbers which are less than "<<n<<" are: "<<endl;
sieveofEratos(n);

return 0;
}
*/

//prime 1,codechef:
/*
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){

   if (n==0 or n==1){
       return false;
   }
   for (int i=2;i*i<=n;i++){
         if (n%i==0)
            return false;
   }


return true;

}
int main(){
int t,m,n;
cin>>t;
for (int j=0;j<t;j++){
        cin>>m>>n;
for (int i=m;i<=n;i++){
    if (prime(i)==true){
        cout<<i<<endl;
    }
}
cout<<endl;
}

return 0;

}
*/
