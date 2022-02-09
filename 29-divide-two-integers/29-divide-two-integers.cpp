class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN &&  divisor==-1) return INT_MAX;
        
        
        long long divd=abs(dividend),div=abs(divisor),res=0;
        int sign = (dividend < 0  ^ divisor < 0 )?-1:1;
        
        while(divd>=div){
            long temp = div,m=1;
            while(temp << 1 <= divd){
                temp<<=1;
                m<<=1;
            }
            divd-=temp;
            res+=m;
        }
        return sign*res;
        
        
        
    }
};