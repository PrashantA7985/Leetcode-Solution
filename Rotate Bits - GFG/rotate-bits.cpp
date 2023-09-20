//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d=d%16;
            string s;
            for(int i=15;i>=0;i--){
                if(n&(1<<i))s.push_back('1');
                else s.push_back('0');
            }
           string r=s;
           reverse(r.begin(),r.begin()+d);
           reverse(r.begin()+d,r.end());
           reverse(r.begin(),r.end());
           reverse(s.begin(),s.begin()+16-d);
           reverse(s.begin()+16-d,s.end());
           reverse(s.begin(),s.end());
           vector<int>v;
           int x=1;
           int sum=0;
        //   cout<<r<<endl;
           for(int i=15;i>=0;i--){
               
               if(r[i]=='1' && i==15){
                //   x=1;
                   sum+=x;
                   
               }
               
               else if(r[i]=='1'){
                 
                   sum+=x;
               }
            //   if(i==15)continue;
               x*=2;
           }
           v.push_back(sum);
            x=1;
            sum=0;
           for(int i=15;i>=0;i--){
               if(s[i]=='1' && i==15){
                   
                   sum+=x;
               }
               else if(s[i]=='1'){
                   
                   sum+=x;
               }
               
               x*=2;
           }
           v.push_back(sum);
           return v;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends