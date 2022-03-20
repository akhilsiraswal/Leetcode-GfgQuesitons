class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        unordered_map<int,int> mp1,mp2,mp3;
        for(int i=0;i<n;i++){
            mp1[tops[i]]++;
            mp2[bottoms[i]]++;
            
            if(tops[i] == bottoms[i]){
                mp3[tops[i]]++;
            }
            
        }
        
        for(int i=1;i<=6;i++){
            if(mp1[i]+mp2[i]-mp3[i] == n) {
                return n- max(mp1[i],mp2[i]);
            }
        }
        return -1;
        
    }
};