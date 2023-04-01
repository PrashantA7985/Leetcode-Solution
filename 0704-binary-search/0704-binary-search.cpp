class Solution {
public:
    int search(vector<int>& arr, int k) {
        int l=0;
        int h=arr.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==k)return mid;
            else if(arr[mid]>k)h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
        
};