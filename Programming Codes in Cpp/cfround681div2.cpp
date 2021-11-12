#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Function to check if all the elements
// can be made 0 in an array
/*
void zeroMaker(int n, int ar[])
{

    // Variable to store
    // sum and maximum element
    // in an array
    int sum = 0, maxx = -1;

    // Loop to calculate the sum and max value
    // of the given array
    for (ll i = 0; i < n; i++) {
        sum += ar[i];
        maxx = max(maxx, ar[i]);
    }

    // If n is 1 or sum is odd or
    // sum - max element < max
    // then no solution
    if (maxx<=(sum - maxx)) {
        cout << "No\n";
    }
    else {

        // For the remaining case, print Yes
        cout << "Yes\n";
    }
}
*/
// Function to whether the array
// can be made zero or not
void zeroMaker(ll arr[], ll N)
{
    // Count for even elements
    ll even = 0;

    // Count for odd elements
    ll odd = 0;

    // Traverse the array to
    // count the even and odd
    for (ll i = 0; i < N; i++) {

        // If arr[i] is odd
        if (arr[i] & 1) {
            odd++;
        }

        // If arr[i] is even
        else {
            even++;
        }
    }

    // Check if count of even
    // is zero or count of odd
    // is zero
    if (even ==0 || odd==0 )
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
}
int main(){
ll t,n;
cin>>t;
for (ll i=0;i<t;i++){
    cin>>n;
    ll a[n];

 for (ll i=0;i<n;i++){
    cin>>a[i];
 }
 zeroMaker(a,n);

}






return 0;
}


