class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int temp=num;
            int res=0;
            while(temp){
                res+=temp%10;
                temp/=10;
            }
            num = res;
        }
        return num;
    }
};