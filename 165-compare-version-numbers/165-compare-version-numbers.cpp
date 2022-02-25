#include<bits/stdc++.h>
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,len1=0,j=0,len2=0,n1=version1.length(),n2=version2.length();
        while(i<n1 && j<n2){
            while((i+len1)< n1 && version1[i+len1]!='.') len1++;
            while((j+len2)<n2&&version2[j+len2]!='.') len2++;
            
            string s1=version1.substr(i,len1);
            string s2 = version2.substr(j,len2);
            // cout<<s1<<" "<<s2<<endl;
            int num1=stoi(s1);
            int num2=stoi(s2);
            // cout<<num1<<" "<<num2<<endl;
            if(num1 < num2) return -1;
            else if(num1>num2) return 1;
            
            i+=len1+1;
            j+=len2+1;
        cout<<i<<" "<<j<<endl;
            len1=len2=0;
            
            
            
        }
        if(i>=n1 && j>=n2) return 0;
        else {
           
            while(i<n1){
                if(version1[i]!='.' && version1[i]>'0'){
                return 1;
            }
                i++;
            }
            while(j<n2) {
                if(version2[j]!='.' && version2[j]>'0'){
                return -1;
            }
                j++;
            }
            
        }
        
        return 0;
        
        
    }
};