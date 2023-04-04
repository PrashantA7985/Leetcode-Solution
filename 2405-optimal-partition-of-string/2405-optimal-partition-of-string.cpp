class Solution {
public:
    int partitionString(string s) {
     map<char,int>m;
        int count=1;
        int j=0;
        for(int i=0;i<s.size();i++){
         if(m[s[i]]==1){
             while(m[s[j]]==1){
                 m[s[j]]--;
                 j++;
             }
             count++;
         }
           
            m[s[i]]++;
            
        }
        return count;
    }
};