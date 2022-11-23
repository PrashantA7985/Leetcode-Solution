class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& v) {
        for(int i=0;i<9;i++){
            map<char,int>m;
            for(int j=0;j<9;j++){
               if( v[i][j]!='.'){
               m[v[i][j]]++;
                   if(m[v[i][j]]>1 )return false;
                }
                
            }
        }
        for(int i=0;i<9;i++){
            map<char,int>m;
            for(int j=0;j<9;j++){
              if(  v[j][i]!='.'){
               m[v[j][i]]++;
                  if(m[v[j][i]]>1 )return false;
                }
                
            }
        }
        for(int j=0;j<9;j=j+3){
               
                   for(int i=0;i<9;i=i+3){
                   map<char,int>m;
                       for(int k=j;k<j+3;k++){
                   for(int l=i;l<i+3;l++){
                       if(v[k][l]!='.'){
                           m[v[k][l]]++;
                           if(m[v[k][l]]>1)return false;
                       }
                   }
                   }
                   
               }
           }
         
           for(int j=0;j<9;j=j+3){
             
                   for(int i=0;i<9;i=i+3){
                   map<char,int>m;
                         for(int k=j;k<j+3;k++){
                   for(int l=i;l<i+3;l++){
                       if(v[l][k]!='.'){
                           m[v[l][k]]++;
                           if(m[v[l][k]]>1)return false;
                       }
                   }
                   }
                   
               }
           }
           
        
        return true;
    }
};