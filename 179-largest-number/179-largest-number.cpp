class Solution {
public:
    
    static bool cmp(int a,int b){
       string as = to_string(a);
        string bs = to_string(b);
        return as+bs>bs+as;
        
    }
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string st="";
        for(auto i:nums){
            st+=to_string(i);
        }
        
        while(st[0] == '0' && st.size()>1 ) st.erase(0,1);
        
        // cout<<endl;
        
        return st;
    }
};