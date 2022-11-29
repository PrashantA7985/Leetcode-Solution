class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
          int i=0,j=0;
        int ans=0;
        int count=0;
        while(i<v.size()){
            if(v[i]==0)count++;
            
            while(count>k){
                if(v[j]==0)count--;
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};