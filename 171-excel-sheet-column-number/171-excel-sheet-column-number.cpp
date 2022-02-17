class Solution {
public:
    int titleToNumber(string columnTitle) {
     // return 0;
        int answer=0,k=0;
        for(int i=columnTitle.size()-1;i>=0;i--){
            answer+=pow(26,k++)*(columnTitle[i]-'A' +1);
            // cout<<answer<<" ";
        }
        return answer;
    }
};