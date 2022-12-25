class Solution {
public:
    vector<int> answerQueries(vector<int>& a, vector<int>& b) {
      vector<int>ans,temp;
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<a.size();i++){
               sum+=a[i];
                 temp.push_back(sum);
        }
        
        for(int i=0;i<b.size();i++){
            int data=0;
   for(int j=0;j<temp.size();j++){
    if(temp[j]<=b[i])data++;
}
            ans.push_back(data);
        }
        return ans;
    }
};