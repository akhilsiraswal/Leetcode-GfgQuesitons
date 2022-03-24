class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0,l=0,h=people.size()-1;
        sort(people.begin(),people.end());
        while(l<=h){
            if(people[l]+people[h] > limit ){
                count++;
                h--;
            }else{
                l++;
                h--;
                count++;
            }
             // count++;
        }
        return count;
    }
};