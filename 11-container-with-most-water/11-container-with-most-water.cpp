class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int l=0,h=height.size()-1;
        int mxsum=0;
        while(l<=h){
            mxsum = max(mxsum,min(height[l],height[h])*(h-l));
            if(height[l]<height[h]) l++;
            else h--;
        }
        return mxsum;
        
    }
};