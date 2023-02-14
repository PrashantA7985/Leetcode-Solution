class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        vector<vector<int>>ans;
         sort(a.begin(),a.end());
       
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && (a[i]!=a[i-1]))){
            int l=i+1;
            int h=n-1;
                int sum=0-a[i];
            
            while(l<h){
                if((a[l]+a[h])==sum){
                    vector<int>temp;
                    temp.push_back(a[i]);
                         temp.push_back(a[l]);
                         temp.push_back(a[h]);
                     ans.push_back(temp);
                    while(l<h && a[l]==a[l+1])l++;
                     while(l<h && a[h]==a[h-1])h--;
                    l++;
                    h--;
                    
                }
                else if((a[l]+a[h])<sum)
                  
                      l++;
                
                else
                  
                    h--;
               
            }
            }
        }
      
      
        return ans;
    }

};