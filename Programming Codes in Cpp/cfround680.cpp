/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,x,ans;
cin>>t;
for (int i=0;i<t;i++){
    cin>>n>>x;
    int a[n];
    int b[n];

    for (int j=0;j<n;j++){
        cin>>a[j];
    }

      for (int j=0;j<n;j++){
        cin>>b[j];
    }
    ans=0;
   for (int j=0;j<n;j++){
        if (a[j]>=x){
                ans++;
            cout<<"No"<<endl;
            break;
        }
    else {
     continue;
    }
   }
if (ans==0){
    cout<<"Yes"<<endl;
}
}

return 0;

}
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
vector<ll>v;
cin>>t;
for (int i=0;i<t;i++){
    ll p,q;
    cin>>p>>q;
    ll a=max(p,q);
    for (ll i=1;i<=a;i++){
        if(((p%i)==0) && ((i%q)!=0)){
             v.push_back(i);
           }
    }

  cout<<*max_element(v.begin(), v.end())<<endl;

}

return 0;
}
