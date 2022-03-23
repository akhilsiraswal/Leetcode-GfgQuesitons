class Solution {
public:
    
    int bruteForce(int n,int k,int &val){
        if(n==1) return val;
        
        if(k%2==0){
            if(val==0) val = 1;
            else val=0;
            bruteForce(n-1,k/2,val);
        }else{
            
            bruteForce(n-1,(k+1)/2,val);
        }
        return val;
        
    }
    
    int kthGrammar(int n, int k) {
        int val=0;
        return bruteForce(n,k,val);        
        return 0;
    }
};