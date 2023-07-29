class Solution {
public:
    int f(string & s1, string & s2,int i,int j, vector<vector<int>>&v){
            if(i<0 || j<0)
        return 0;
        
    if(v[i][j]!=-1)
        return v[i][j];
    
    if(s1[i] == s2[j])
        return v[i][j] = 1 + f(s1,s2,i-1,j-1,v);
    
    else 
        return v[i][j] = 0 + max(f(s1,s2,i,j-1,v),f(s1,s2,i-1,j,v));

    }
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> v(n,vector<int>(m,-1));
             // for(int i=0;i<n;i++){
             //     for(int j=0;j<m;j++)v[i][j]=-1;
             // }                
        return f(s1,s2,n-1,m-1,v);
    }
};