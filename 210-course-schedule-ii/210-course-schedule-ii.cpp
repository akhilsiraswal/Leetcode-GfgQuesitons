class Solution {
public:
    
    bool cycleDfs(int idx,vector<int> adj[],vector<bool> &visited,vector<bool> &dfsVisited,stack<int> &st){
        visited[idx] = true;
        dfsVisited[idx] = true;
        
        for(auto i:adj[idx]){
            if(!visited[i]){
                if(cycleDfs(i,adj,visited,dfsVisited,st)) return true;
            }else if(dfsVisited[i]) return true;
        }
        
        dfsVisited[idx] = false;
        st.push(idx);
        
        return false;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> adj[numCourses];
        vector<bool> visited(numCourses,false),dfsVisited(numCourses,false);
        stack<int> st;
        for(auto i:prerequisites){
            int u = i[1];
            int v = i[0];
            adj[u].push_back(v);
        }
        
        
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(cycleDfs(i,adj,visited,dfsVisited,st)) return {};
            }
        }
        
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
        
        
        
    }
};