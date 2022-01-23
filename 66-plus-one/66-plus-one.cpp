class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1,flag=0;
        for(int i=0;i<digits.size();i++) if(digits[i] != 9){
             flag=1;break;
        }
        
        if(!flag){
            vector<int>result(digits.size()+1);
            result[0] = 1;
            for(int i=1;i<=digits.size();i++) result[i] = 0;
            return result;
        }
        
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]+carry > 9  ) digits[i] = 0,carry=1;
            else digits[i]+=carry,carry=0;
        }
        return digits;
        
        
        
    }
};