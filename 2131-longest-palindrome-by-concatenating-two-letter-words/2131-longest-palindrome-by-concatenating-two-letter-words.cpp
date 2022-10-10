class Solution {
public:
    int longestPalindrome(vector<string>& v) {
        map<string,int>m;
        vector<string>data;
        for(int i=0;i<v.size();i++)m[v[i]]++;
        int ans=0;
        for(int i=0;i<v.size();i++){
            string s=v[i];
            reverse(s.begin(),s.end());
            if(s==v[i]){
                 if(m[s]>1){
                ans+=4;
                m[s]--;
                m[v[i]]--;
            }
                else if(m[v[i]]!=0)data.push_back(v[i]);
            }
         else   if(m[v[i]]!=0 && m[s]!=0){
                ans+=4;
                m[s]--;
                m[v[i]]--;
            }
            else if(m[v[i]]>0)data.push_back(v[i]);
        }
        for(int i=0;i<data.size();i++){
            if(data[i][0]==data[i][1]){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};