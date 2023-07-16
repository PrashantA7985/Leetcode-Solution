class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>v(n,vector<int>(2));
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            v[i][0]=nums[i]-k;
            v[i][1]=nums[i]+k;
        }
        int ans=1;
        int i=1,j=0;
        int x=v[0][0];
        int y=v[0][1];
        // int left=v[0][0];
        // int right=v[0][1];
        int count=1;

        while(i<n){
            y=min(y,v[i][1]);
            x=max(x,v[i][0]);
            while(j<n && y-x<0){
                j++;
                y=v[j][1];
             
                
                
            }
          
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};