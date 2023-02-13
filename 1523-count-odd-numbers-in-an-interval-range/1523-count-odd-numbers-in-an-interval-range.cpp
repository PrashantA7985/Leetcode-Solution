class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0 and high%2==0){
           return (high-low)/2; 
        }
        if(low%2==0 and high%2!=0){
           return ((high+1)-low)/2; 
        }
        if(low%2!=0 and high%2==0){
           return (high-(low-1))/2; 
        }
      
           return ((high+1)-(low-1))/2; 
        
       
    }
};