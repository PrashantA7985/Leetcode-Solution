class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
               int i=0;
        int j=0;
        int ans=0;
        int count=0;
        for(i=0;i<v.size();i++){
            if(v[i]==0)count++;
            while(count>k){
                if(v[j]==0)count--;
                j++;
            }
            ans=max(ans,i-j+1);
            
        }
        return ans;
    }
};