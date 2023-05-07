//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
         string ans;
        ans+=str[0];
        for(int i=1;i<str.size();i++)
        {
            if((ans[i-1]) > (str[i]) || (i>1 && (ans[i-1]==str[i])))
            {
                ans+=str[i];
            }
            else break;
            
        }
        string ansret=ans;
        
        reverse(ans.begin(),ans.end());
        return ansret+ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends
