class Solution {
public:
    long long zeroFilledSubarray(vector<int>& v) {
        vector<int>a;
        long long ans=0;
        for(int i=0;i<v.size();i++){
            int count=0;
            int flag=0;
               while(i<v.size() && v[i]==0){
                   count++;
                   flag=1;
                   i++;
               }
               if(flag==1)
               a.push_back(count);
        }
        for(int i=0;i<a.size();i++){
            
            long long n=a[i];
            ans+=n;
            long long sum=n*(n-1)/2;
            ans+=sum;
        }
        return ans;

    }
};