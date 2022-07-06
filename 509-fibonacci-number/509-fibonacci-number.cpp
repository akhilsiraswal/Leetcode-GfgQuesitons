class Solution {
public:
    int fib(int n) {
        
        int prev = 0,curr = 1,next;
        if(n == 1 ) return curr;
        if(n <= 0) return prev;
        
        for(int i=2;i<=n;i++){
            next = curr + prev;
            prev = curr;
            curr = next;
            
        }
        return next;
    }
};