class Solution {
public:
    int minCost(string s, vector<int>& v) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                 vector<int>data;
                data.push_back(v[i]);
                while(i<s.size()-1 && s[i]==s[i+1]){
                    data.push_back(v[i+1]);
                    i++;
                }
                sort(data.begin(),data.end());
                for(int j=0;j<data.size()-1;j++)ans+=data[j];
               
                
            
            }
        }
        return ans;
    }
};