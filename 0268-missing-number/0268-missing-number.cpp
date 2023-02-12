class Solution {
public:
    int missingNumber(vector<int>& v) {
     int n=v.size();
        int x=v[0];
        for(int i=1;i<n;i++){
           x=x^v[i];
        }
        for(int i=0;i<=n;i++)x=x^i;
        return x;
    }
};