//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    #define mod 1000000007
    //Function to find the nth catalan number.
    long long fact(int n){
        if(n==0) return 1;
        return (n%mod * fact(n-1)%mod)%mod;
    }
    int inv(int i) {
  return i<=1?i:mod-(long long)(mod/i)*inv(mod%i)% mod;
}
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
        long long int ans=1;
        for(int i=2*n;i>n;i--) ans=(ans%mod * i%mod)%mod;
         ans=ans*inv(fact(n+1))%mod;
         return ans%mod;
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends
