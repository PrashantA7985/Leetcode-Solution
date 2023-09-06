class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int ans=0;
        map<char,int>m;
        int j=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            while(m[s[i]]>1){
                m[s[j]]--;
                if(m[s[j]]==0)m.erase(s[j]);
                j++;
            }
            
            if(m.size()>ans)ans=m.size();
        }
        return ans;
    }
};