//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Position this line where user code will be pasted.
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.BalancedString(N));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static String BalancedString(int N) {
        // code here
        StringBuilder ans=new StringBuilder();
        String full="abcdefghijklmnopqrstuvwxyz";
        int n=N;
        while(N>26){
            ans.append(full);
            N-=26;
        }

        if(N%2==0){//even
            for(int i=0;i<N/2;i++)ans.append((char)('a'+i));
            for(int i=26-N/2;i<26;i++)ans.append((char)('a'+i));
        }else{//odd
            int sum=0;
            while(n>0){
                sum+=(n%10);
                n/=10;
            }
            if(sum%2==0){//even
                for(int i=0;i<(N+1)/2;i++)ans.append((char)('a'+i));
                for(int i=26-N/2;i<26;i++)ans.append((char)('a'+i));
            }else{//odd
                for(int i=0;i<N/2;i++)ans.append((char)('a'+i));
                for(int i=26-(N+1)/2;i<26;i++)ans.append((char)('a'+i));
            }

        }
        return ans.toString();
    }
}