/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
ll ans=0;
cin>>t;
for (ll i=0;i<t;i++){
    cin>>x>>y;
    for (ll j=0;;j++){
        while (x!=y){
            if (j)
        }
    }
}

return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// C++ program for the above approach


// Function to calculate
// the GCD of two numbers
/*
ll GCD(ll a, ll b)
{
	if (b == 0) {
		return a;
	}
	return GCD(b, a % b);
}


void GcdPair(vector<pair<int, int> > arr, int k)
{

	int lo = 0, hi = arr.size() - 1, mid;
	pair<int, int> ans;
	ans = make_pair(-1, 0);


	while (lo <= hi) {

		// Calculate mid
		mid = lo + (hi - lo) / 2;
		if (GCD(arr[mid].first,
				arr[mid].second)
			> k) {
			ans = arr[mid];
			hi = mid - 1;
		}
		// Reducing the search space
		else
			lo = mid + 1;
	}

	// Print the answer
	if (ans.first == -1)
		cout << "-1";
	else
		cout << "( " << ans.first << ", "
			<< ans.second << " )";

	return;
}
*/
/*
// Driver Code
int main()
{
	// Given array and K
	vector<pair<int, int> > arr = { { 3, 6 },
									{ 15, 30 },
									{ 25, 75 },
									{ 30, 120 } };
	int K = 16;

	// Function Call
	GcdPair(arr, K);

	return 0;
}
*/

ll mingcdpair(ll arr[], ll n)
{
    // Calculating MAX in array
    ll high = 0;
    for (ll i = 0; i < n; i++)
        high = min(high, arr[i]);

    // Maintaining count array
    ll count[high + 1] = {0};
    for (ll i = 0; i < n; i++)
        count[arr[i]]++;

    // Variable to store the
    // multiples of a number
    ll counter = 0;

    // Iterating from MAX to 1
    // GCD is always between
    // MAX and 1. The first
    // GCD found will be the
    // highest as we are
    // decrementing the potential
    // GCD
    for (ll i = high; i >= 1; i--)
    {
        ll j = i;
       counter = 0;

        // Iterating from current
        // potential GCD
        // till it is less than
        // MAX
        while (j <= high)
        {
            // A multiple found

            if(count[j] >=2)
               return j;

           else if (count[j] == 1)
                counter++;

            // Incrementing potential
            // GCD by itself
            // To check i, 2i, 3i....
            j += i;

            // 2 multiples found,
            // max GCD found
            if (counter == 2)
                return i;
        }
    }
}

int main()
{
    ll t,n,k;
    cin>>t;
    for (ll j=0;j<t;j++){
        cin>>n>>k;
        ll a[n];
     for (ll i=0;i<n;i++){
        cin>>a[i];
     }
     cout << mingcdpair(a,n) << endl;
    }


return 0;
}

