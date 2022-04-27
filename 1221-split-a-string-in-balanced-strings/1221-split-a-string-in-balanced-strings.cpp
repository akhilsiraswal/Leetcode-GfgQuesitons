class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,temp=0;
        for(auto i:s){
            if(i == 'R') temp--;
            else temp++;
            if(temp ==0) count++;
        }
        
        return count;
        
    }
};