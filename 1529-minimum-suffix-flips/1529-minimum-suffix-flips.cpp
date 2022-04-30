class Solution {
public:
    int minFlips(string target) {
        int res=0;
        char value='0';
        for(int i=0;i<target.length();i++){
            if(value!=target[i]){
                res++;
                value = (value == '0') ? '1' : '0' ;
            }
        }
        return res;
    }
};