class Solution {
public:
    int minimumAverageDifference(vector<int>& v) {
        long long  sum=0;
        long long x=0;
        int n=v.size();
        long long  count=INT_MAX;
        int ans=0;
        for(int i=0;i<v.size();i++)sum+=v[i];
        for(int i=0;i<n;i++){
            sum-=v[i];
            x+=v[i];
            long long  temp=x/(i+1);
            long long  data;
            if((n-i-1)>0){
             data=sum/(n-i-1);
            }
            else{
             data=sum;
            }
            long long y=abs(temp-data);
            
            if(count>y){
                count=y;
                ans=i;
            }
            
        }
        return ans;
        
    }
};