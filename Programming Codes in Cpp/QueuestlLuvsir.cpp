#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>q;
    q.push("abc");
    q.push("bcd");
    q.push("fgh");
    q.push("ead");

    while(!q.empty()){
        cout<<q.front()<<'\n';
        q.pop();
    }
return 0;
}
