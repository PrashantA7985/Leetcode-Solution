class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
            int n=arr.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i==0 || (i>0 && (arr[i]!=arr[i-1]))){
               
                for(int j=i+1;j<n;j++){
                    if(j==(i+1)  || (j>i+1 && (arr[j]!= arr[j-1]))){
                    
                        int l=j+1;
                        int h=n-1;
                     
                long long  int sum=1LL*k-1LL*(arr[i]+arr[j]);
                     
                        while(l<h){
                            long long res=arr[l]+arr[h];
                            if(res==sum){
                                vector<int>temp;
                                temp.push_back(arr[i]);
                                temp.push_back(arr[j]);
                                temp.push_back(arr[l]);
                                temp.push_back(arr[h]);
                                ans.push_back(temp);
                                while(l<h && arr[l]==arr[l+1])l++;
                                  while(l<h && arr[h]==arr[h-1])h--;
                                l++;
                                h--;
                            }
                            else if ( res<sum)l++;
                            else h--;
                        }
                    }
                }
             
                
            }
        }
        return ans;
    }
};