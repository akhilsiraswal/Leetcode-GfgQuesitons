// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    
    bool cycleCheck(int idx,vector<int> adj[],vector<bool> &vis,vector<bool> &dfsVis){
        vis[idx] = true;
        dfsVis[idx] = true;
        
        for(auto i:adj[idx]){
            if(!vis[i]){
                if(cycleCheck(i,adj,vis,dfsVis) ) return true;
            }else if(dfsVis[i] == true) return true;
        }
        
        dfsVis[idx] = false;
        return false;
        
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> vis(V+1,false),dfsVis(V+1,false);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(cycleCheck(i,adj,vis,dfsVis) ) return true;
            }
        }
        return false;
        // code here
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends