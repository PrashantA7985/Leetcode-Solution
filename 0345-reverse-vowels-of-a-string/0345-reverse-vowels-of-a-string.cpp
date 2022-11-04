class Solution {
public:
    string reverseVowels(string s) {
        int i,j;
        map<char,int>m;
        m['a']=1;
        m['e']=1;
        m['i']=1;
        m['o']=1;
        m['u']=1;
        m['A']=1;
        m['E']=1;
        m['I']=1;
        m['O']=1;
        m['U']=1;
        for(i=0,j=s.size()-1;i<j;i++,j--){
            while(i<j && m[s[i]]==0)i++;
            while(j<s.size() && m[s[j]]==0)j--;
         
            if(m[s[i]]!=0 && m[s[j]]!=0)swap(s[i],s[j]);
          
           
        }
        return s;
    }
};