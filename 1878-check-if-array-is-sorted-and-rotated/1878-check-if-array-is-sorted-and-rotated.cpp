class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)v.push_back(nums[i]);
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                reverse(nums.begin(),nums.begin()+1+i);
                reverse(nums.begin()+1+i,nums.end());
                reverse(nums.begin(),nums.end());
                break;
            }
        }
        return v==nums;
    }
};