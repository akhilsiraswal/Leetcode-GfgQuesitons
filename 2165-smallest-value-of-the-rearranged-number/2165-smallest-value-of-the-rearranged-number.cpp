class Solution {
public:
    long long smallestNumber(long long num) {
        if(num >= -9 && num<=9) return num;
        int count=0,sign=1;
        
        if(num<0) {
            sign=-1;
            num = 0-num;
        }
        string s = to_string(num);
        string non_zero="";
        for(auto i:s){
            if(i!='0') non_zero+=i;
            else count++;
        }
            sort(non_zero.begin(),non_zero.end());
        if(sign<0){
            reverse(non_zero.begin(),non_zero.end());
            while(count){
                non_zero+='0';
                count--;
            }
            non_zero = '-'+non_zero;
        }else{
            string st=to_string(non_zero[0]-'0');
            
            // cout<<st<<endl;
            while(count){
                st+='0';
                count--;
            }
            for(int i=1;i<non_zero.size();i++) st+=non_zero[i];
            
            non_zero = st;
        }
        
        cout<<non_zero<<endl;
        num = stoll(non_zero);
        
        
        
        return num;
        
        
    }
};