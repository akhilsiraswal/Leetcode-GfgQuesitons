class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string result="";
        
        int i=0,j=0,carry = 0;
        while(i<num1.length() && j<num2.length()){
            int n1= num1[i++]- '0',n2 = num2[j++]-'0';
            int sum = n1+n2+carry;
            if(sum>9) {
                 
                result += to_string(sum%10);
                carry = 1;
            }else{
                result += to_string(sum);
                carry= 0;
            }
        }
        
        while(i<num1.length()){
            int sum = carry+(num1[i++]-'0');
            if(sum>9){
                result+= to_string(sum%10);
                carry=1;
                
            }else{
                result+=to_string(sum);
                carry = 0;
            }
        }
        
        while(j<num2.length()){
            int sum = carry+(num2[j++]-'0');
            if(sum>9){
                result+= to_string(sum%10);
                carry=1;
                
            }else{
                result+=to_string(sum);
                carry = 0;
            }
        }
        
        if(carry) result+=to_string(carry);
        reverse(result.begin(),result.end());
        return result;
        
    }
};