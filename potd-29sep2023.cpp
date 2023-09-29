//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void dfs(vector<vector<int>> &grid,int i,int j,int m,int n){
        if(grid[i][j] == 2) return;
        
        grid[i][j] = 2;
        if(j > 0 and grid[i][j-1] == 1) dfs(grid,i,j-1,m,n);
        if(i > 0 and grid[i-1][j] == 1) dfs(grid,i-1,j,m,n);
        if(i+1 < n and grid[i+1][j] == 1) dfs(grid,i+1,j,m,n);
        if(j+1 < m and grid[i][j+1] == 1) dfs(grid,i,j+1,m,n);
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0;i<m;i++){
            if(grid[0][i] == 1)  dfs(grid,0,i,m,n);
        }
        for(int i = 0;i<n;i++){
            if(grid[i][m-1] == 1)  dfs(grid,i,m-1,m,n);
        }
        for(int i = m-1;i>=0;i--){
            if(grid[n-1][i] == 1)  dfs(grid,n-1,i,m,n);
        }
        for(int i = n-1;i>=0;i--){
            if(grid[i][0] == 1)  dfs(grid,i,0,m,n);
        }
        
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
