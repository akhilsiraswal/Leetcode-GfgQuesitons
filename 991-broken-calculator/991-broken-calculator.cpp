class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int val=target,steps=0;
        while(val!=startValue){
            if(val <startValue){
                steps += startValue-val;
                val = startValue;
            }else if(val%2==0) {
                val/=2;
                steps++;
                
            }else{
                val++;
                steps++;
            }
        }
        return steps;
    }
};