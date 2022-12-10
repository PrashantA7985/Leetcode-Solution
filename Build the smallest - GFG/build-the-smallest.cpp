//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
    stack<char>st;
    int x=0;
    for(int i=0;i<num.size();i++){
        while(!st.empty() && st.top()>num[i] && x<k){
            st.pop();
            x++;
        }
        st.push(num[i]);
    }
    while(!st.empty() && x<k){
        st.pop();
        x++;
    }
    string ans,s;
    
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    int flag=0;
    for(int i=ans.size()-1;i>=0;i--){
           if(ans[i]=='0' && flag==0)continue;
           else {
               flag=1;
               s.push_back(ans[i]);
           }
    }
    if(s.size()==0)s.push_back('0');
    return s;
}