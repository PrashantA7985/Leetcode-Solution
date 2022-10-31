class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& v) {
        for(int i=0;i<v.size();i++){
            int x=i;
            int temp=v[i][0];
            for(int j=0;j<v[0].size();j++){
                  if(v[x][j]!=temp)return false;
                x++;
               if(x>=v.size())break; 
            }
        }
                for(int i=1;i<v[0].size();i++){
            int x=i;
            int temp=v[0][i];
            for(int j=0;j<v.size();j++){
                  if(v[j][x]!=temp)return false;
                x++;
               if(x>=v[0].size())break; 
            }
        }
      return true;  
    }
};