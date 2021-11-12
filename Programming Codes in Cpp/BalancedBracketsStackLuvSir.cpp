#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int>symb={{'[',-1},{'{',-2},{'(',-3},{')',3},{'}',2},{']',1}};

string isBalanced(string s){
       stack<int>st;
     for(char i:s){
         if(symb[i]<0){
             st.push(i);
         }
         else{
            if(st.empty())return "NO";
            char top=st.top();
            st.pop();
            if((symb[top]+symb[i])!=0)return "NO";
         }
     }
  if(st.empty())return "YES";
  return "NO";
}


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<'\n';
    }
    return 0;
}
