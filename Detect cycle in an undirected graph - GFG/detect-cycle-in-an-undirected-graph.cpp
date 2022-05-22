// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    
    bool cycleDFS(int parent,int current,vector<int> adj[],vector<int> &visited){
        visited[current] = 1;
        
        for(auto i:adj[current]){
            if(visited[i] == 0){
                 if(cycleDFS(current,i,adj,visited)) return true;
            }else if( i!=parent) return true;
        }
        return false;
        
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>visited(V+1,0);
        for(int i=0;i<V;i++){
            if(visited[i] == 0) if(cycleDFS(-1,i,adj,visited)) return true;
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends