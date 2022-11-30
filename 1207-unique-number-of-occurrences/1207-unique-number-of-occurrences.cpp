class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto it:m)v.push_back(it.second);
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1])return false;
        }
        return true;
    }
};