class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int>st;
        // for(auto i:nums)
        for(auto i:nums){
            if(i%2==0)
                st.insert(i);
            else st.insert(i*2);
        }
        
        int result = *st.rbegin()-*st.begin();
        while(*st.rbegin()%2 == 0){
            int num = *st.rbegin();
            st.erase(num);
            st.insert(num/2);
            result = min(result,*st.rbegin()-*st.begin());
            
        }
        return result;
    }
};