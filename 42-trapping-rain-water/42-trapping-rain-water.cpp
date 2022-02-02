class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>rheight(n);
        vector<int>lheight(n);
        
        for(int i=n-1;i>=0;i--){
            if(i==n-1) rheight[i] = height[i];
            else rheight[i] = max(height[i],rheight[i+1]);
        
        }
        
        for(int i=0;i<n;i++){
            if(i==0) lheight[i] = height[i];
            else lheight[i] = max(height[i],lheight[i-1]);
        }
        
        int answer=0;
        for(int i=1;i<n-1;i++){
            answer += min(lheight[i],rheight[i])-height[i];
        }
        
        
        return answer;
        
        
        
        
    }
};