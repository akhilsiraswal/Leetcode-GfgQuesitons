class Solution {
public:
   /* string getSmallestString(int n, int k) {
        string result="";
        
        while(n>0){
            for(int i=26;i>=1;i--){
                if(k-i < n-1 ) continue;
                else{
                    result+=i-1+'a';
                    k-=i;
                    n--;
                    break;
                }
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
    */
    
    string getSmallestString(int n,int k){
        string result=""; 
        for(int i=0;i<n;i++) result+='a';
        k-=n;
        
        for(int i=n-1;i>=0;i--){
            if(k==0) break;
            
            if(k<25){
                result[i] = 'a'+k;
                k=0;
            }else{
                result[i] = 'a'+25;
                k-=25;
            }
            
        }
        return result;
    }
};