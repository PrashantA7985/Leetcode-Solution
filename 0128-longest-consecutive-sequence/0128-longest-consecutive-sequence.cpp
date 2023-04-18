class Solution {
public:
    int longestConsecutive(vector<int>& v) {
      set<int>s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(s.find(v[i]-1)==s.end()){
                    int count=0;
                    int j=0;
                 while(s.find(v[i]+j)!=s.end()){
                     count++;
                     j++;
                 }
                ans=max(ans,count);
            }
        }
        return ans;
                            
    }
};