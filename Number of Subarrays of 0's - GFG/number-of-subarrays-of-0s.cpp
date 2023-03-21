//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &v) {
    // Write your code here.
    vector<int>a;
    long long sum=0;
    for(int i=0;i<n;i++){
        int count=0;
        int flag=0;
        while(i<n && v[i]==0){
            count++;
            flag=1;
            i++;
        }
        if(flag==1)
        a.push_back(count);
    }
    for(int i=0;i<a.size();i++){
        long long x=a[i];
        sum+=x;
        sum+=x*(x-1)/2;
    }
    return sum;
    
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends