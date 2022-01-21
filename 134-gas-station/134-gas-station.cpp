class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr=0,start=0,diff=0,n=gas.size(),total=0;
        for(int i=0;i<n;i++){
            diff = gas[i] - cost[i];
            total+=diff;
            curr+=diff;
            if(curr<0 ) start  = i+1,curr=0;
            
        }
        if(total>=0) return start;
        
        return -1;
        
    }
};