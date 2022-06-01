class Solution {
public:
    /*
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]] = i;
        }
        
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int idx = mp[nums1[i]];
            int next_greater = -1;
            for(int j=idx+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    next_greater = nums2[j];
                    break;
                }
            }
            res.push_back(next_greater);
        }
        
        return res;
    }
    */
     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans,temp(nums2.size());
         
         stack<int> st;
         for(int i=nums2.size()-1;i>=0;i--){
             if(st.empty()){
                 st.push(nums2[i]);
                 temp[i] = -1;
                 
             }else{
                 while( !st.empty()&&  st.top() < nums2[i] ) st.pop();
                 if(st.empty()) 
                     temp[i] = -1;
                 else temp[i] = st.top();
                 
                 st.push(nums2[i]);
             }
         }
         
         unordered_map<int,int> mp;
         for(int i=0;i<nums2.size();i++){
             mp[nums2[i]] = temp[i];
         }
         
         for(int i=0;i<nums1.size();i++){
             ans.push_back(mp[nums1[i]]);
         }
         
         // for(auto i:temp) cout<<i<<" ";
         return ans;
                 

         
         
     }
};