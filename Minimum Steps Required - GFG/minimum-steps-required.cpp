//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string s) {
    // Write your code here.
    int n=s.size();
    string r;
    r.push_back(s[0]);
    for(int i=1;i<n;i++){
        while(i<n && s[i]==s[i-1]){
            i++;
        }
        if(i<n)
        r.push_back(s[i]);
    }

    int x=r.size();

    return x/2+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends