class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        vector<int>result,temp;
        while(l<=h){
            int mid = (h+l)/2;
            if(nums[mid] == target){
                
                for(int i=l;i<=h;i++) {
                    if(nums[i] == target) temp.push_back(i);
                }
                break;
                // l=mid+1;
                // result.push_back(mid);
            }else if (nums[mid]>target) h=mid-1;
            else l=mid+1;
        }
        if(temp.size() ==0){
            result.push_back(-1);
            result.push_back(-1);
        }else if(temp.size()==1){
            
        result.push_back(temp[0]);
        result.push_back(temp[0]);
        }else{
            result.push_back(temp[0]);
            result.push_back(temp[temp.size()-1]);
        }
        return result;
    }
};