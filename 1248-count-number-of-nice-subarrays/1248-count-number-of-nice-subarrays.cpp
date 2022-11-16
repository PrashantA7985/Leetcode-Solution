class Solution {
public:
    int numberOfSubarrays(vector<int>& num, int goal) {
        
             map<int,int>m;
        vector<int>a(num.size());
        vector<int>v(num.size());
        for(int i=0;i<num.size();i++){
            if(num[i]%2==0)v[i]=0;
            else v[i]=1;
        }
        a[0]=v[0];
        for(int i=1;i<num.size();i++){
            a[i]=v[i]+a[i-1];
        }
      
        m[0]++;
        int ans=0;
        for(int i=0;i<num.size();i++){
           
             if(m.find((a[i]-goal))!=m.end())ans+=m[(a[i]-goal)];
           m[a[i]]++;
        }
        return ans;
    }
};