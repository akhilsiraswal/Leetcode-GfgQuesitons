class Solution {
public:
    
    string invert(string st){
        for(int i=0;i<st.length();i++){
            if(st[i] == '0') st[i] = '1';
            else st[i] = '0';
        }
        return st;
    }
    
    string helper(string s,int n){
        
        if(n==0) return s;
        

        // reverse(st.begin(),st.end());
        
        s = helper(s,n-1);
        string st = invert(s);
        reverse(st.begin(),st.end());
        return s+"1"+st;
        // return s;
        
        // return (helper(s,n-1)+"1"+reverse(st.begin(),st.end()));
        
    }
    
    
    char findKthBit(int n, int k) {
        string st =helper("0",n);
        return st[k-1];
    }
};