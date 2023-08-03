class Solution {
public:
    vector<string> letterCombinations(string s) {
        vector<string>v,ans;
        int j=0;
        for(int i=0;i<10;i++){
            if(i<=1){
                string r;
                v.push_back(r);
            }
            else if(i==7 || i==9){
                string r;
                r.push_back('a'+j);
                r.push_back('a'+j+1);
                r.push_back('a'+j+2); 
                 r.push_back('a'+j+3);
                v.push_back(r);
                j=j+4;
                
            }
            else{
                string r;
                r.push_back('a'+j);
                r.push_back('a'+j+1);
                r.push_back('a'+j+2);
                v.push_back(r);
                j=j+3;
                
            }
        }
        
       if(s.size()==1){
           int x=s[0]-'0';
           for(int i=0;i<v[x].size();i++){
               string r;
               r.push_back(v[x][i]);
               ans.push_back(r);
           }
       }
        else  if(s.size()==2){
           int x=s[0]-'0';
            int y=s[1]-'0';
           for(int i=0;i<v[x].size();i++){
               
               for(int j=0;j<v[y].size();j++){
                   string r;
                  r.push_back(v[x][i]);
                   r.push_back(v[y][j]);
                                  ans.push_back(r);
               }


           }
       }
        else  if(s.size()==3){
           int x=s[0]-'0';
            int y=s[1]-'0';
            int z=s[2]-'0';
           for(int i=0;i<v[x].size();i++){
               
               for(int j=0;j<v[y].size();j++){
                   for(int k=0;k<v[z].size();k++){
                        string r;
                  r.push_back(v[x][i]);
                   r.push_back(v[y][j]);
                  r.push_back(v[z][k]);
                       
                                  ans.push_back(r);
                   }
                  
               }


           }
       }
         else  if(s.size()==4){
           int x=s[0]-'0';
            int y=s[1]-'0';
            int z=s[2]-'0';
             int w=s[3]-'0';
           for(int i=0;i<v[x].size();i++){
               
               for(int j=0;j<v[y].size();j++){
                   for(int k=0;k<v[z].size();k++){
                       for(int l=0;l<v[w].size();l++){
                                                   string r;
                  r.push_back(v[x][i]);
                   r.push_back(v[y][j]);
                  r.push_back(v[z][k]);
                        r.push_back(v[w][l]);
                                  ans.push_back(r);
                       }

                   }
                  
               }


           }
       }
        return ans;
    }
};