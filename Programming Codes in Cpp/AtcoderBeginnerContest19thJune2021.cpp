#include <bits/stdc++.h>
using namespace std;


/*
int NoofPairs(int a[], int n)
{
    set<int> v1;
 
    int un[n] ;
 
    un[n - 1] = 0;
 
    int count = 0;
   
    for (int i = n ; i >=1; i--)
    {
 
        auto pos = v1.find(a[i]);
        if (pos != v1.end())
            un[i - 1] = count;
        else
            un[i - 1] = ++count;
 
        v1.insert(a[i]);
    }
 
    set<int>v2;
 
   
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
 
        auto pos = v2.find(a[i]);
        if (pos != v2.end())
            continue;
 
        answer += un[i];
 
        v2.insert(a[i]);
    }
    return answer;
}
*/

/*
int NoofPairs(int a[], int n)
{

    set<pair<int, int>> hsh;
    for(int i = 1; i <= (n - 1); i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(a[i]!=a[j]){
            hsh.insert(make_pair(a[i], a[j])); 
            }
        }
    }
     
    return hsh.size();
}
*/

/*
int NoofOps(int arr[], int n)
{
    int ans = 0; // Initialize result
 
    // Start from two corners
    for (int i=0,j=n-1; i<=j;)
    {
       
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
 
        
        else if (arr[i] > arr[j])
        {
          
            j--;
            arr[j] += arr[j+1] ;
            ans++;
        }
 
    
        else
        {
            i++;
            arr[i] += arr[i-1];
            ans++;
        }
    }
 
    return ans;
}
*/
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

int n;
cin>>n;
int arr[n];
for (int i=1;i<=n;i++){
    cin>>arr[i];
}

cout<<NoofOps(arr,n);


return 0;
}