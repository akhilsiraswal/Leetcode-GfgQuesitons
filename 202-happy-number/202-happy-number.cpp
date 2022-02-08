class Solution {
public:
    
    int sum(int n){
        int res=0;
        while(n){
            int r=n%10;
            res+=r*r;
            n/=10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow = sum(slow);
            fast = sum(fast);
            fast = sum(fast);
            if(fast == 1) return true;
        }while(slow!=fast);
        // if(slow!=1) return false;
        return false;
    }
};