class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int index1=-1,index2;
        for(int i=v.size()-2;i>=0;i--){
            if(v[i+1]>v[i]){
                index1=i;
                break;
            }
        }
        if(index1>=0){
            for(int i=v.size()-1;i>=0;i--){
                if(v[index1]<v[i]){
                    index2=i;
                break;}
            }
            swap(v[index1],v[index2]);
            reverse(v.begin()+index1+1,v.end());
            
        }
        else{
            reverse(v.begin(),v.end());
        }
        
    }
};