class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        if(v.size()==0)return 0;
       sort(v.begin(),v.end());
        int ans=1;
        int  maxi=v[0];
        int count=1;
        for(int i=1;i<v.size();i++){
            if(maxi==v[i])continue;
            else if(v[i]-maxi==1){
                count++;
                maxi=v[i];
                ans=max(ans,count);
            }
            else{
                count=1;
                maxi=v[i];
                
            }
        }
        return ans;
                            
    }
};