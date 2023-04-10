class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int ans=INT_MIN;
        int count=0;
        for(int i=0;i<v.size();i++){
             count+=v[i];
            ans=max(ans,count);
            if(count<0){
                count=0;
            }
            
    
        }
        return ans;
        
    }
};