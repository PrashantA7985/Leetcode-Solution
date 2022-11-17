#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i,j;
        for(i=0,j=n-1;i<j;i++,j--){
            swap(v[i],v[j]);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}