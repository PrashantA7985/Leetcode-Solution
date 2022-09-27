class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
      int n=arr.size();
    unordered_set<int>s;
     for(int i=0;i<n;i++){
         s.insert(arr[i]);
     }
     int ans=0;
     for(int i=0;i<n;i++){
         if(s.find(arr[i]-1)==s.end()){
             int count=0;
             int j=0;
             while(s.find(arr[i]+j)!=s.end()){
                 count++;
                 j++;
             }
             ans=max(ans,count);
         }
     }
     return ans;
    }
};