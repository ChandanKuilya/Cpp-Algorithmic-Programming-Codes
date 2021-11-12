#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
for (int i=0;i<n;i++){
    string s;
    cin>>s;
 
if(s=="1" || s=="4" || s=="78"){
    cout<<"+"<<'\n';
   continue;
    
}

int l=s.length();

if(s[l-2]=='3' && s[l-1]=='5'){
    cout<<"-"<<'\n';
    continue;
}

if(s[0]=='9' && s[l-1]=='4'){
    cout<<"*"<<'\n';
    continue;
}

if(s[0]=='1' && s[1]=='9' && s[2]=='0'){
    cout<<"?"<<'\n';
   continue;
}

}
return 0;     //Critical Test Case: 19035.(if we don't use continue stsement then output - and ? will be there and thus giving wrong answer)
}