class Solution {
public:
       vector<int> small(vector<int>&arr, int n){
        stack<int>st;
        vector<int>v;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){st.pop();}
            if(st.empty()){
              v.push_back(-1);
                
            }
            else v.push_back(st.top());
            st.push(i);
            
        }
        return v;
    }
    vector<int> great(vector<int>&arr, int n){
        stack<int>st;
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){st.pop();}
            if(st.empty()){
              v.push_back(n);
                
            }
            else v.push_back(st.top());
            st.push(i);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>a,b;
        int n=heights.size();
        a=small(heights,n);
        b=great(heights,n);
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,(heights[i]*(b[i]-a[i]-1)));
        }
       return ans;
    }
};