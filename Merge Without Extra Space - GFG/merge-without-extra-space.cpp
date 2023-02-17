//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long a1[], long long a2[], int n, int m) 
        { 
            // code here 
          
            int i=0;
         
            int j=0;
            vector<int>v;
            while(i<n && j<m ){
                if(a1[i]>a2[j] ){
                  v.push_back(a2[j]);
                  j++;
                }
                else {
                    v.push_back(a1[i]);
                    i++;
                }
                
                
            }
            while(i<n){
                v.push_back(a1[i]);
                i++;
            }
             while(j<m){
                v.push_back(a2[j]);
                j++;
            }
            for( i=0;i<n;i++)a1[i]=v[i];
            for(j=0;j<m;j++){
                a2[j]=v[i++];
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends