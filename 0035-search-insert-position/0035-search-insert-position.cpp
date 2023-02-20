class Solution {
public:
    int searchInsert(vector<int>& v, int k) {
       int n=v.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(v[mid]==k)return mid;
            if(v[mid]>k)h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};