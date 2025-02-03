#include<bits/stdc++.h>
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>temp;
                for(int k=i;k<=j;k++){
                      temp.push_back(nums[k]);
                }
                v.push_back(temp);
            }
        }
        for(int i=0;i<v.size();i++){
            int flag=0;
            for(int j=0;j<v[i].size()-1;j++){
                // cout<<v[i][j]<<" ";
                      if(v[i][j]>=v[i][j+1]){
                        flag=1;
                        break;
                      }

            }
            // cout<<endl;
            if(flag==0){
                if(ans<v[i].size())ans=v[i].size();
            }
        }
        for(int i=0;i<v.size();i++){
            int flag=0;
            for(int j=0;j<v[i].size()-1;j++){
                      if(v[i][j]<=v[i][j+1]){
                        flag=1;
                        break;
                      }
            }
             if(flag==0){
                if(ans<v[i].size())ans=v[i].size();
            }
        }
        return ans;
        
    }
};