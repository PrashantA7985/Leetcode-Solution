class Solution {
public:
    long long coloredCells(int n) {
       
        long long ans=0;
        n=n-1;
        ans=(n*1LL*(8+(n*1LL-1)*4))/2;
        return ans+1;
        
    }
};