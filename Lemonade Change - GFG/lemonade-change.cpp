//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &v) {
        // code here
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(v[i]==5)a++;
            else if(v[i]==10){
                 b++;
                if(a>0)a--;
                else return 0;
               
            }
            else{
                if(b>0 && a>0){
                    b--;
                    a--;
                }
                else if(b==0 && a>=3)a-=3;
                else return 0;
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
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends