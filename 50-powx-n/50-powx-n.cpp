class Solution {
public:
    double myPow(double x, int n) {
        
        return pow(x,n);
//         // return 1;
//         if(x==1) return 1;
//         double answer=1,sign=1;
        
//         if(n<0){
//             sign=-1;
//             n=-n;
//         }
        
//         while(n-- && answer<=10000 ){
//             answer*=x;
//         }
//         if(answer>10000) {
//             if(sign==-1) return 0;
//         }
        
//         if(sign== -1) answer  = 1/answer;
//         return answer;
    }
};