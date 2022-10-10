class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int ans=0;
        int x=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1)ans++;
            else ans=0;
            x=max(ans,x);
        }
        return x;
    }
};