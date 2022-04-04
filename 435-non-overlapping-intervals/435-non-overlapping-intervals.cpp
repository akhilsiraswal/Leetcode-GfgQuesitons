class Solution {
public:
    /*
   static bool cmp(vector<int>p ,vector<int>q){
        
        return p[1]< q[1]; 
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        
        
        int answer=-1;
        vector<int>prev = intervals[0];
        for(auto i:intervals){
            if(prev[1] >i[0]  ) answer++;
            else prev = i;
        }
        return answer;
        
        
        
    }
    */
    
     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end());
         int count=0,l=0,r=1,n=intervals.size();
         while(r<n){
             if(intervals[l][1] <=intervals[r][0] ) {
                 l=r;
                 r++;
             }else if(intervals[l][1] <=intervals[r][1] )  {
                 count++;
                 r++;
             }else if(intervals[l][1]> intervals[r][1]) {
                 count++;
                 l=r;
                 r++;
             }
         }
         return count;
         
     }
};