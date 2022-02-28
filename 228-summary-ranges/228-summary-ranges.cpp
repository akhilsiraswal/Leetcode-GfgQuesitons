class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return {};
        // if(nums.size()==1) return {to_string(nums[0])};
        string s="";
        s+=to_string(nums[0]);
        vector<string>result;
        int flag=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1 == nums[i]) {
                flag=1;
                
                continue;
                
            }
            else{
                if(s!=to_string(nums[i-1])){
                    
                s+="->";
                s+=to_string(nums[i-1]);
                }
                result.push_back(s);
                s="";
                s+=to_string(nums[i]);
                flag=0;
            }
        }
        if(flag){
            s+="->";
            s+=to_string(nums[nums.size()-1]);
                
        }
        if(s!="") result.push_back(s);
        return result;
    }
};