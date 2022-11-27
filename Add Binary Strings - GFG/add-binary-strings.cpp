//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string a, string b)
	{    reverse(a.begin(),a.end());
	     reverse(b.begin(),b.end());
	     
	    string s,p;
	    int n=a.size();
	    int m=b.size();
	    int x=0;
	    int z=0;
	     if(n>=m){
	         z=m;
	         p=a;
	         
	     }
	     else {
	         z=n;
	         p=b;
	     }
	     for(int i=0;i<z;i++){
	         if(a[i]=='1' && b[i]=='1' && x==0){
	             s.push_back('0');
	             x=1;
	         }
	       else   if(a[i]=='1' && b[i]=='1' && x==1){
	             s.push_back('1');
	             x=1;
	         }
	         else  if(a[i]=='0' && b[i]=='1' && x==0){
	             s.push_back('1');
	             
	         }
	          else  if(a[i]=='1' && b[i]=='0' && x==0){
	             s.push_back('1');
	             
	         }
	          else  if(a[i]=='0' && b[i]=='1' && x==1){
	             s.push_back('0');
	             
	             
	         }
	          else  if(a[i]=='1' && b[i]=='0' && x==1){
	             s.push_back('0');
	             
	             
	         }
	          else  if(a[i]=='0' && b[i]=='0' && x==0){
	             s.push_back('0');
	             
	         }
	          else  if(a[i]=='0' && b[i]=='0' && x==1){
	             s.push_back('1');
	             x=0;
	             
	         }
	         
	         
	     }
	     for(int i=z;i<p.size();i++){
	         if(x==1 && p[i]=='1'){
	             s.push_back('0');
	             x=1;
	             
	         }
	         else if(x==1 && p[i]=='0'){
	             s.push_back('1');
	             x=0;
	             
	         }
	         else if(x==0 && p[i]=='0'){
	             s.push_back('0');
	             
	             
	         }
	         else if(x==0 && p[i]=='1'){
	             s.push_back('1');
	             
	             
	         }
	     }
	     if(x==1)s.push_back('1');
	     string ans;
	     int flag=0;
	     for(int i=s.size()-1;i>=0;i--){
	         if(s[i]=='0'  && flag==0){
	             
	         }
	         else {
	             flag=1;
	             ans.push_back(s[i]);
	         }
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
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends