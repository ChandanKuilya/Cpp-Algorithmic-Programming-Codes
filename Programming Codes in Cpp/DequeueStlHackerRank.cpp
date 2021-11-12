#include<bits/stdc++.h>
using namespace std;


void printmax(int n,int a[],int k){
      deque<int>dq(k);
    
    for(int i=0;i<k;i++){
        while(!dq.empty() && a[i]>=a[dq.back()]){
            dq.pop_back();
        }

          dq.push_back(i);
    }

    for(int i=k;i<n;i++){
        cout<<a[dq.front()]<<" ";

     while(!dq.empty() && dq.front()<=i-k){
         dq.pop_front();
     }

     while(!dq.empty() && a[i]>=a[dq.back()]){
         dq.pop_back();
     }
        
        dq.push_back(i);

    }
  cout<<a[dq.front()]<<" ";
}


/*
void printmax(int n,int arr[],int k)
{
     
    // Create a Double Ended Queue,
    // Qi that will store indexes
    // of array elements
    // The queue will store indexes
    // of useful elements in every
    // window and it will
    // maintain decreasing order of
    // values from front to rear in Qi, i.e.,
    // arr[Qi.front[]] to arr[Qi.rear()]
    // are sorted in decreasing order
    std::deque<int> Qi(k);
 
    /* Process first k (or first window)
     elements of array */
     
   /*
    for (int i = 0; i < k; i++)
    {
     
        // For every element, the previous
        // smaller elements are useless so
        // remove them from Qi
        while ((!Qi.empty()) && arr[i] >=
                            arr[Qi.back()])
           
             // Remove from rear
            Qi.pop_back();
 
        // Add new element at rear of queue
        Qi.push_back(i);
    }
 
    // Process rest of the elements,
    // i.e., from arr[k] to arr[n-1]
    for (int i=k; i < n; i++)
    {
     
        // The element at the front of
        // the queue is the largest element of
        // previous window, so print it
        cout << arr[Qi.front()] << " ";
 
        // Remove the elements which
        // are out of this window
        while ((!Qi.empty()) && Qi.front() <=
                                           i - k)
           
            // Remove from front of queue
            Qi.pop_front();
 
        // Remove all elements
        // smaller than the currently
        // being added element (remove
        // useless elements)
        while ((!Qi.empty()) && arr[i] >=
                             arr[Qi.back()])
            Qi.pop_back();
 
        // Add current element at the rear of Qi
        Qi.push_back(i);
    }
 
    // Print the maximum element
    // of last window
    cout << arr[Qi.front()]<<" ";
}
*/



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  int t;
  cin>>t;
  for (int i=0;i<t;i++){
      int n,k;
      cin>>n>>k;
      int arr[n];
      for (int i=0;i<n;i++){
          cin>>arr[i];
      }
    printmax(n,arr,k);
    cout<<'\n';
  }

    return 0;
}