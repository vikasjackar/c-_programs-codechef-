//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    bool isPalindrome(string S)
    {
        
        string P = S;
        reverse(P.begin(), P.end());
    
        if (S == P) {
            
            return true;
        }
    
        else {
    
            return false;
        }
    }

    int addMinChar(string str){
        bool t=false;
        int n=str.size();
        int temp=n;
        // cout<<temp<<endl;
        int i=1;
        string p=str;
        reverse(p.begin(),p.end());
        if(p == str){
        return 0;
        }
        else
        {
            while(temp!=0)
            {
                string s = str.substr((n-i),i);
                reverse(s.begin(),s.end());
                s = s + str;
                // cout<<s<<endl;
                p=s;
                reverse(p.begin(),p.end());
                if(p == s)
                return i;
                i++;
                temp--;
            }
        }
        return n-1;
        //code here
        
        
        
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
