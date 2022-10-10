class Solution {
public:
    int missingNumber(vector<int>& v) {
         int x=0;
        for(int i=0;i<v.size();i++){
            x=x^v[i];
        }
        for(int i=0;i<=v.size();i++){
            x=x^i;
        }
        return x;
    }
};