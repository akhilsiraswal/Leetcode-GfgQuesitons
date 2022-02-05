class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> codes = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size() == 0) return {};
        vector<string>result;
        result.push_back("");
        
        for(auto digit:digits){
            string digit_code = codes[digit-'2'];
            vector<string>tmp;
            for(auto c:digit_code){
                for(auto i:result){
                    tmp.push_back(i+c);
                }
            }
            result = tmp;
        }
        return result;
        
    }
};