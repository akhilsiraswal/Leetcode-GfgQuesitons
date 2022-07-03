class Solution {
public:
    double myPow(double x, int n) {
        double answer=1;
        long long nn = n;
        if(nn<0) nn*=-1;
        while(nn){
            if(nn%2 == 0) {
               x*=x;
                nn/=2;
            }else{
                answer*=x;
                nn--;
            }
        }
        if(n<0) return 1/answer;
        else        return answer;
        
        
        

    }
};