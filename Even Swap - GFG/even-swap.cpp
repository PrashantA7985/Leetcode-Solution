//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            vector<int>v;
            
            int i=0;
            while(i<n){
                
                if(a[i]%2==0){
                    vector<int>data;
                 
                    int count=0;
                    while(i<n && a[i]%2==0){
                        data.push_back(a[i]);
                    i++;
                    count++;
                    
                }
           
                sort(data.rbegin(),data.rend());
               
                    for(int j=0;j<data.size();j++)v.push_back(data[j]);
           
              
                }
                else{
                     vector<int>data;
                       
                    int count=0;
                    while(i<n && a[i]%2!=0){
                  data.push_back(a[i]);
                    i++;
                    count++;
                }
              
                sort(data.rbegin(),data.rend());
                for(int j=0;j<data.size();j++)v.push_back(data[j]);
                }
                
                
            }
            return v;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends