class Solution {
public:
    bool canMakeSubsequence(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        int i=0;
        int j=0;
        while(j<m)
        {
            if(i==n)return 0;
            if(s1[i]==s2[j] || (s1[i]=='z' && s2[j]=='a') || (s1[i]+1)==s2[j]){
                i++;
                j++;
            
            }
            else i++;
        }
        return 1;
    }
};