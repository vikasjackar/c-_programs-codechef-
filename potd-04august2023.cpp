//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void bfs(vector<vector<char>> mat,int row,int col,vector<vector<int>>&vis,int n,int m){
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        queue<pair<int,int>>qp;
        qp.push({row,col});
        while(!qp.empty()){
            int drow = qp.front().first;
            int dcol = qp.front().second;
            qp.pop();
            vis[drow][dcol] = 1;
            for(int i=0;i<4;i++){
                int trow = drow + delrow[i];
                int tcol = dcol + delcol[i];
                if(trow>=0 && trow<n && tcol>=0 && tcol<m && !vis[trow][tcol] && mat[trow][tcol] == 'O'){
                    qp.push({trow,tcol});
                    vis[trow][tcol] = 1;
                }
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>qp;
        for(int i=0;i<n;i++){
            if(mat[i][0] == 'O')bfs(mat,i,0,vis,n,m);
            if(mat[i][m-1]=='O')bfs(mat,i,m-1,vis,n,m);
        }
        for(int i=0;i<m;i++){
            if(mat[0][i] == 'O')bfs(mat,0,i,vis,n,m);
            if(mat[n-1][i]=='O')bfs(mat,n-1,i,vis,n,m);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j] == 'O')mat[i][j] = 'X';
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
