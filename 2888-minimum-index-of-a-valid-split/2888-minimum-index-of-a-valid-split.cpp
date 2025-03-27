class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        map<int,int>m,p;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)m[nums[i]]++;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
            m[nums[i]]--;
            if(p[nums[i]]*2>(i+1)   && m[nums[i]]*2>(n-i-1))return i;
        }
        return -1;
    }
};