class Solution {
public:
    vector<int> successfulPairs(vector<int>& spell, vector<int>& v, long long success) {
           sort(v.begin(),v.end());
         vector<int>ans;
        int n=v.size();
            for(int i=0;i<spell.size();i++){
                long long temp;
                if(success%spell[i])
                 temp=success/spell[i]+1;
                else temp=success/spell[i];          
                int x=lower_bound(v.begin(),v.end(),temp)-v.begin();
               
                ans.push_back(n-x);
                
            }
        return ans;
        
        
        
    }
};