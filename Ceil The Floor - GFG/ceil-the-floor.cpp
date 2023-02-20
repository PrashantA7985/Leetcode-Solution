//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int v[], int n, int x) {
    // code here
    sort(v,v+n);
     long long int l=0;
        long long int h=n-1;
        while(l<=h){
            long long int mid=(l+h)/2;
            if(v[mid]==x)return {v[mid],v[mid]};
            if(v[mid]>x)h=mid-1;
            else l=mid+1;
            
        }
        int z;
        int y;
      
        if(l==n)z=-1;
        else z=v[l];
        if(h==-1)y=-1;
        else y=v[h];
        return {y,z};
}