class Solution {
public:
    
   
    int Bruteforce(vector<string> &strs,int m,int n,int idx,vector<vector<vector<int>>> &mp){
        
        // if(m<0 || n<0) return 0;
        
        if(idx == strs.size() || m<0 || n<0){
            return 0;
        }
        
        if(mp[idx][m][n]!=0) return mp[idx][m][n];
        
        int ones =0,zeroes=0;
         ones = count(strs[idx].begin(),strs[idx].end(),'1');
        zeroes = strs[idx].length()-ones;
        
        
      
        if(zeroes<=m && ones<=n){
             int choose = Bruteforce(strs,m-zeroes,n-ones,idx+1,mp);
             int notChoose = Bruteforce(strs,m,n,idx+1,mp);
        
           return mp[idx][m][n] = max(1+choose,notChoose);
        }else {
           return mp[idx][m][n] = Bruteforce(strs,m,n,idx+1,mp);
        }
        
         // return mp[idx][m][n];
        
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> mp(strs.size()+1,vector<vector<int>> (m+1,vector<int>(n+1,0)));
        return Bruteforce(strs,m,n,0,mp);
    }
};