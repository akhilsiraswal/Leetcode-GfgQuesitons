class Solution {
public:
    
    bool DFS(int current,vector<vector<int>>& graph,vector<int> &colored){
        if(current == -1) colored[current] = 1;
        
        for(auto i:graph[current]){
                
                if(colored[i] == -1){
                    colored[i] = 1-colored[current];
                    if(!DFS(i,graph,colored)) return false;
                }
            else if(colored[i] == colored[current]){
                return false;
            }
        }
        return true;
        
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> colored(n,-1);
        for(int i=0;i<n;i++){   
            if(colored[i] == -1){
                 if(!DFS(i,graph,colored)) return false;
            }
        }
        return true;
    }
};