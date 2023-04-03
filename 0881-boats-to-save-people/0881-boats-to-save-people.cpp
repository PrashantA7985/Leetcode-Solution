class Solution {
public:
    int numRescueBoats(vector<int>& v, int limit) {
        int n=v.size();
        sort(v.begin(),v.end());
       int i=0;
        int j=n-1;
       int count=0;
        while(i<=j){
           if(i==j){
               count++;
               break;
           }
            
           else if(v[i]+v[j] <= limit){
                i++;
                j--;
                count++;
            }
            else if(v[j]<=limit){
                j--;
                count++;
            }
            else {
                i++;
                count++;
            }
        }
        return count;
        
    }
};