/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;

int c[n];
int a[m];

for (int i=0;i<n;i++){
     cin>>c[i];
}
for (int i=0;i<m;i++){
     cin>>a[i];
}
int pos=0;
for (int i=0;i<n;i++){
   if(pos<m && a[pos]>=c[i]){
        pos++;
   }
}

cout<<pos;

return 0;
}
*/


/*
int crr[n];
int arr[m];
vector<int>c;
vector<int>a;

for (int i=0;i<n;i++){
     cin>>crr[i];
}
for (int i=0;i<m;i++){
     cin>>arr[i];
}



for (int i=0;i<n;i++){
     c.push_back(crr[i]);
}

for (int i=0;i<m;i++){
     a.push_back(arr[i]);
}

for (int j=0;j<c.size();j++){
    for (int i=0;i<a.size();i++){
            if(a[i]>=c[j]){
               a.erase(a.begin()+i);
            }

    }
}
*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

string s,s1;
cin>>s;
ll ind;
ll cnt=0;
for(ll i=0;i<s.length();i++){
     if(s[i]=='1'){
          cnt++;
     }
  else{
     s1+=s[i];
  }
}
 
ind=0;

while(ind<s1.length()){
   if(s1[ind]=='2'){
        break;
   }
ind++;
}

string fs;
fs=s1.insert(ind,string(cnt,'1'));

cout<<fs<<'\n';

return 0;
}
