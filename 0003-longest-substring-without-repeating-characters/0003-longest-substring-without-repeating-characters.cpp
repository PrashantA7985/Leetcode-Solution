class Solution {
public:
    int lengthOfLongestSubstring(string s) {
                int ans=0;
        int i=0;int j=0;
       map<char,int>m;
        while(i<s.size()){
            m[s[i]]++;
            if(m[s[i]]>1){
               
                while(m[s[i]]>1){
                    if(m[s[j]]!=0){
                    m[s[j]]--;
                    }
                   
                    j++;
                }
                
            }
            ans=max(ans,i-j+1);
            i++;
        }

       return ans; 
    }
};