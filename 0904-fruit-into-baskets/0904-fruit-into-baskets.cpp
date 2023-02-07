class Solution {
public:
    int totalFruit(vector<int>& a) {
        map<int,int>m;
        int i=0;
        int j=0;
        int count=0,ans=0;
        while(i<a.size()){
              m[a[i]]++;
                     
            if(m.size()>2){
               
                
                while(m.size()>2 && j<a.size()){
                    m[a[j]]--;
                if(m[a[j]]==0)m.erase(a[j]);
                    
                j++;
                }
              // ans=max(ans,count);  
            }
             i++;
            ans=max(ans,i-j);
                     
        }
        count=0;
        // for(auto x:m)cout<<x.first<<" "<<x.second<<endl;
        return max(ans,count);
        
    }
};