class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int size = nums.size();
        int nos= pow(2,size);
        vector<vector<int>>result;
        for(int i=0;i<nos;i++){
            vector<int>temp;
            for(int j=0;j<size;j++){
                if(i&(1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            result.push_back(temp);
            
        }
        return result;
        
        
    }
};