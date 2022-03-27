class Solution {
public:
    
    static bool cmp(pair<int,int>p,pair<int,int>q){
        return p.second < q.second;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1){
                    mp[i]++;
                }else{
                    if(mp[i] == 0)mp[i] = 0;
                    break;
                }
            }
        }
        
        vector<pair<int,int>>res;
        for(auto i:mp){
            // cout<<i.first<<" "<<i.second<<endl;
            res.push_back({i.first,i.second});
        }
        
        stable_sort(res.begin(),res.end(),cmp);
        vector<int>result;
        for(auto i:res){
          if(k>0) result.push_back(i.first);
            k--;
            
        }
        return result;
        
        
    }
};