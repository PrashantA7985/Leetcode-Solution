class Solution {
public:
    bool increasingTriplet(vector<int>& v) {
        int x=INT_MAX;
        int y=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(x>=v[i])x=v[i];
            else if(y>=v[i])y=v[i];
            else return true; 
        }
        return false;
    }
};