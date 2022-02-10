class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<ranges.size();i++){
           int r1=ranges[i][0],r2=ranges[i][1];
            for(int i=r1;i<=r2;i++) mp[i]=true;
        }
        
        for(int i=left;i<=right;i++){
            if(mp[i]!=true) return false;
        }
        
        
        
       
        return true;
    }
};