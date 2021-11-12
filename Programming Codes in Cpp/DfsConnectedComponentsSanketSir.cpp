#include <bits/stdc++.h>
using namespace std;
#define pb push_back 
#define ump unordered_map


class Graph{
public:
  int v;  //no. of vertices
  list<int>*adj;
  Graph(int n){
     this->v=n;
     this->adj=new list<int>[this->v];
  }
  void addEdge(int u,int v,bool bidir=true){
      adj[u].pb(v);
      if(bidir){
          adj[v].pb(u);
      }
  }
 void dfsHelper(int src,ump<int,bool>&visited){
     visited[src]=true;
     cout<<src<<'\n';
     for (auto neighbour: this->adj[src]){
         if (not visited[neighbour]){
             dfsHelper(neighbour,visited);
         }
     }

 }
  void dfs(int src){
      ump<int,bool>visited;
      dfsHelper(src,visited);
  }
  int connectedComp(){
      ump<int,bool>visited;
      int ans=0;
      for (int i=0;i<=v-1;i++){
          if(not visited[i]){
              dfsHelper(i,visited);
              ans++;
          }
      }
    return ans;
  }
};



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

Graph g(6);

g.addEdge(0,1);
g.addEdge(2,1);
g.addEdge(3,2);
g.addEdge(4,5);

cout<<g.connectedComp();

return 0;
}