#include <iostream>
using namespace std;
 void solve(int a[],int i,int n){
     if(i>n)return;
     swap(a[i],a[n]);
     solve(a,i+1,n-1);
 }


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
      solve(v,0,n-1);
       for(int i=0;i<n;i++)cout<<v[i]<<" ";
       cout<<endl;
    }
	return 0;
}