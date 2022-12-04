//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string s, int n)
    {
        string r,v,ans;
        int a[26]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(i==0 || i==4 || i==8 || i==14 || i==20){
                while(a[i]--){
                    v+=char(i+97);  
                }
              }
                
            else {
                while(a[i]--){
                r+=char(i+97);
                }
        }
        }
         int x=v.size();
        int y=r.size();
         if(abs(x-y)>1){
            ans.push_back('-');
            ans.push_back('1');
            return ans;
        }
        
       
       
       if(x>y){
            ans+=v[0];
            int i=1;
            int j=0;
            while(i<v.size()){
                ans+=r[j];
                ans+=v[i];
                j++;
                i++;
            }
        }
        else  if(y>x){
            ans+=r[0];
            int i=1;
            int j=0;
            while(i<r.size()){
                ans+=v[j];
                ans+=r[i];
                j++;
                i++;
            }
        }
        else {
            string ns,an;
               int i=0;
               while(i<v.size()){
                 ns+=v[i];
                ns+=r[i]; 
                i++;
               }
            
           
               i=0;
               while(i<v.size()){
                 an+=r[i];
                an+=v[i]; 
                i++;
               }
               ans=min(an,ns);
            }
        return ans;
        }
        

};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends