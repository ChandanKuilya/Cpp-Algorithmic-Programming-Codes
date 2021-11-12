//Maximising Xor:
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v;
int l,r,ans;
cin>>l;
cin>>r;
for (int i=l;i<=r;i++){
   for (int j=i;j<=r;j++){
         ans =(i^j);
        v.push_back(ans);
   }

}

cout<<*max_element(v.begin(),v.end());

return 0;
}
*/

//REMEMBER INCASE OF LEFT SHIFT OPERATOR :
//                    If,N=N<<i;
//                 then,N=N*(2^i);(2 to the power i,here ^ denotes power,not XOR Operator)


//sum vs Xor:
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll n,x;
ll ans=0;
cin>>n;
for (x=0;x<n;x++){
    if ((n+x) == (n^x)){
        ans++;
    }
}
cout<<ans;

return 0;
}
*/
//The upper solution is not efficient solution,and exits time limit in many higher values of n;
//Following is the best solution:

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    long long cnt=0,iz,ans;
    cin>>n;
    // checking the number of zeros in the binary representation of n;
    while(n){
        iz= n&1;
        if(iz==0){
            cnt++;
        }
        n = n>>1;
    }
    ans = pow(2,cnt);
    cout<<ans;
    return 0;
}
