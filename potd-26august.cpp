//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    map<char, int> mp; int i =0;
        while(i<s.size() && mp.size()!=k ){
            mp[s[i]]++;
            i++;
        }
        if(mp.size()<k) return -1;
        int start = 0, end = i-1, n= s.size();
        int res = end-start+1;
        while(mp.size()==k&&end+1<n&&start<=end){
            if(mp.find(s[end+1])!=mp.end()){
                end++;
                mp[s[end]]++;
                res = max(res, end-start+1);
            }
            else{
                if(mp[s[start]] != 1){
                    mp[s[start]]--;
                    start++;
                }
                else{
                    mp.erase(s[start]);
                    start++;
                    end++;
                    mp[s[end]]++;
                    res = max(res, end-start+1);
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
