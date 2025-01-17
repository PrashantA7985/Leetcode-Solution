class Solution {
public:
    bool doesValidArrayExist(vector<int>& v) {
            int n=v.size();
            if(n==1)return !v[0];
            vector<int>a;
              a.push_back(1);
            for(int i=0;i<n-1;i++){
                 
                    int x=a.back(); 
                   
                    int z=v[i]^x;
                  
                    a.push_back(z);
                
            }
           
            for(int i=0;i<n-1;i++){
                if(a[i]^a[i+1]!=v[i])return 0;
            }
            if(a[n-1]^a[0]!=v[n-1])return 0;
        return 1;

    }
};