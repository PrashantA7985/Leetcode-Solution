class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int goal) {
       map<int,int>m;
        vector<int>a(v.size());
        a[0]=v[0];
        for(int i=1;i<v.size();i++){
            a[i]=v[i]+a[i-1];
        }
        // for(int i=0;i<v.size();i++){
        //     m[a[i]]++;
        // }
        m[0]++;
        int ans=0;
        for(int i=0;i<v.size();i++){
           
             if(m.find((a[i]-goal))!=m.end())ans+=m[(a[i]-goal)];
           m[a[i]]++;
        }
        return ans;
       
    }
};