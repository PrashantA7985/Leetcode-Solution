class Solution {
public:
    int removeDuplicates(vector<int>& a) {
       
        int k=0;
        for(int i=1;i<a.size();i++){
            int j=i;
            while(j<a.size() && a[j]==a[j-1])j++;
            if(j<a.size()) a[++k]=a[j];

            i=j;
        }
        return k+1;
    }
};