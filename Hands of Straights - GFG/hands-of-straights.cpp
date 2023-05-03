//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int n, int k, vector<int> &v) {
        // code here
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
            
        }
      while(m.size()>0){
          int x=m.begin()->first;
          for(int i=0;i<k;i++){
           
              if(m.find(x+i)==m.end())return false;
              m[x+i]--;
                 if(m[x+i]==0)m.erase(x+i);
              
          }
      }
      return true;
                
         
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends