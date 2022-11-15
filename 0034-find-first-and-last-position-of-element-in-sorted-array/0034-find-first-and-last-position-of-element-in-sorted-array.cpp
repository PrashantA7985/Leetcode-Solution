class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
  int z= lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int y= upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        y--;
        vector<int>ans;
        if(z>y){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
        ans.push_back(z);
         ans.push_back(y);
        }
         return ans;
        
    }
};