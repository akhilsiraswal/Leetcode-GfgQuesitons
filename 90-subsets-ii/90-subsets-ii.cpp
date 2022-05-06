class Solution {
public:
    
    
//    using bitmask method..
    /*
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int n=nums.size(),sz = pow(2,n);
        int c,j;
        set<vector<int>> st;
        for(c=0;c<sz;c++){
            vector<int> res;
            for(j=0;j<n;j++){

                if(c & ( 1<< j)) {
                    res.push_back(nums[j]);
                }
            }
            sort(res.begin(),res.end());
            st.insert(res);
        }
        
        
        vector<vector<int>> res;
        
        for(auto i:st) res.push_back(i);
        
        return res;
        
        
    }
    */
  
    // using backtracking.. 
    
    vector<vector<int>> res;
    void subset( vector<int> &nums,int idx,vector<int> v){
        sort(v.begin(),v.end());
        if(find(res.begin(),res.end(),v) == res.end())res.push_back(v);
        for(int i=idx;i<nums.size();i++){
            v.push_back(nums[i]);
            
            subset(nums,i+1,v);
            v.pop_back();
            
        }
        
        return ;
        
        
    }
    
     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<int> v;
          subset(nums,0,v);
         return res;
         
     }
};