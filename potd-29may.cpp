//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        map<string,vector<string>>v;
        for(int i=0;i<N;++i){
            string now;
            for(int j=0;j<Dictionary[i].size();++j){
                if(Dictionary[i][j]>='A' and Dictionary[i][j]<='Z'){
                    now+=Dictionary[i][j];
                    v[now].push_back(Dictionary[i]);
                }
            }
           
        }
        vector<string>ans;
        for(int i=0;i<v[Pattern].size();++i){
            ans.push_back(v[Pattern][i]);
        }
        
        if(ans.size())
            return ans;
        return {"-1"};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
