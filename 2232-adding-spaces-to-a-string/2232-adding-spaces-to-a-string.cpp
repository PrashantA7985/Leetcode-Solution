class Solution {
public:
    string addSpaces(string s, vector<int>& v) {
        string ans;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<v.size() && v[j]==i){
                ans.push_back(' ');
                j++;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};