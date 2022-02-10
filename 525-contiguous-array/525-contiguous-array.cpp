class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int result=0,sum=0;
        map<int,int>mp;
        mp.insert({0,-1});
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                sum+=-1;
            }else{
                sum+=1;
            }
            
            if(mp.find(sum) !=mp.end()){
                auto it = mp.find(sum);
                // int index = it-mp.begin();
                int len = i-it->second;
                if(len>result) result = len;
            }else{
                mp[sum] = i;
            }
            
        }
        return result;
    }
};