//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int n, int k, vector<char> &t) {
        // code here
        priority_queue<int>q;
        int time=0;
        map<char,int>m;
        for(int i=0;i<n;i++)m[t[i]]++;
        
        for(auto x:m){
            q.push(x.second);
        }
        while(!q.empty()){
            vector<int>temp;
            int count=0;
            for(int i=0;i<k+1;i++){
                if(!q.empty()){
                    temp.push_back(q.top()-1);
                    q.pop();
                        count++;
                }
            
            }
            for(int i=0;i<temp.size();i++){
                if(temp[i]>0){
                    q.push(temp[i]);
                }
            }
            time+=q.size()>0?k+1:count;
            
        }
        return time;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends