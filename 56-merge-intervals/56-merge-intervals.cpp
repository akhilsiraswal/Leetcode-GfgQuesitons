class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int minValue,maxValue;
        vector<vector<int>> result;
        for(int i=0;i<intervals.size();i++){
            minValue = intervals[i][0];
            maxValue = intervals[i][1];
            int k=0;
            for(int j=i+1;j<intervals.size();j++){
                if(intervals[j][0]<=maxValue){
                minValue = min(minValue,intervals[j][0]);
                maxValue = max(maxValue,intervals[j][1]);
                k++;
                }else break;
            }
            vector<int> res;
            res.push_back(minValue);
            res.push_back(maxValue);
            result.push_back(res);
            i+=k;
        }
        
        return result;
    }
};