class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
         int z=INT_MAX;
        int y=0;
        int low=0;
        int high=arr.size()-1;
        vector<int>ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                z=min(mid,z);
                 high=mid-1;     
            }
            else if(arr[mid]>x)high=mid-1;
            else low=mid+1;
            
            
        }
        low=0;
        high=arr.size()-1;
                while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                y=max(mid,y);
                 low=mid+1;     
            }
            else if(arr[mid]>x)high=mid-1;
            else low=mid+1;
            
            
        }

        
        
        
        
        
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