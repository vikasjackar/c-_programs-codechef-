//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int helper(int l , int h , string &S , int n , string &temp){
    int count=0;
    while(l>=0 && h<n){
        if(S[l]==S[h]){
            temp.push_back(S[l]);
            l--;
            h++;
            count=count+2;
        }
        else{
            break;
        }
    }
    return count;
}
    string longestPalin (string S) {
        // code here
        int maxi=0;
        string res,temp;
        int n=S.length();
        if(n==1){
            return S;
        }
        // first we will check for odd pallindrome;
        // int k=0;
        for(int i=0 ; i<n-2 ; i++){
            if(S[i]==S[i+2]){
                temp="";
                int t=helper(i,i+2,S,n,temp);
                // cout<<k++<<"  "<<t<<" "<<temp<<endl;
                if(t+1>maxi){
                    string r=temp;
                    reverse(temp.begin(),temp.end());
                    res=temp+S[i+1]+r;
                    maxi=t+1;
                }
            }
        }
        // now checking for even npallindrome numbers;
        for(int i=0 ; i<n-1 ; i++){
            if(S[i]==S[i+1]){
                temp="";
                int t=helper(i,i+1,S,n,temp);
                // cout<<k++<<"  "<<t<<" "<<temp<<endl;
                if(t>maxi){
                    string r=temp;
                    reverse(temp.begin(),temp.end());
                    res=temp+r;
                    maxi=t;
                }
            }
        }
        if(maxi==0){
            string ajiMeraLauda;
            ajiMeraLauda.push_back(S[0]);
            return ajiMeraLauda;
        }
        else{
            return res;
    }
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
