class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
       long long ans=0;
        int n=nums.size();
        vector<int>v;
        int a=nums[n-1];
        for(int i=n-1;i>=0;i--){
            a=max(a,nums[i]);
            v.push_back(a);
        }
        reverse(v.begin(),v.end());
      
       for(int i=0;i<n;i++){};
        
        int maxp=INT_MIN;
        for(int i=0;i<n-1;i++){
            maxp=max(maxp,nums[i]);
            ans=max(ans,(maxp-nums[i])*1LL*v[i+1]);
        }
        return ans;
        
        
    }
};