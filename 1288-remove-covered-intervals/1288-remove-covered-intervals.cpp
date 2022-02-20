class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int result=0,left=-1,right=-1;
        for(auto i:intervals){
            if(i[0]>left && i[1]>right){
                left = i[0];
                result++;
            }
            right = max(right,i[1]);
        }
        return result;
    }
};