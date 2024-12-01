class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
           for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(j!=i){

                
                if(2*arr[j]==arr[i])return 1;
                }
            }
           }
        return 0;
    }
};