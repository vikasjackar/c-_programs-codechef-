//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define ll long long
#define M 1000000007
class Solution{
    public:
    int solve(int i,vector<int> &v,int tot,int x,vector<vector<int>> &dp){
        if(tot<0)return 0;
        if(i==v.size()){
            return 0==tot;
        }
        if(dp[i][tot]==-1){
            dp[i][tot] = solve(i+1,v,tot-v[i],x,dp)%M+solve(i+1,v,tot,x,dp)%M;
            dp[i][tot] %=M;
        }
        return dp[i][tot];
            
    }
    int numOfWays(int n, int x)
    {
        // code here
        vector<int> v;
        for(int i=1;powl(i,x)<=n;i++){
            v.push_back(powl(i,x));
        }
        //a,b,c,d,e,f,g,h
        //find possible combinations of element which result in sum of n
       vector<vector<int>> dp(v.size(),vector<int>(n+1,-1));
        return solve(0,v,n,n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends
