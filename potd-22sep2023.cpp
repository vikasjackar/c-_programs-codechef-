//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    void solve(int arr[],int n,int x, vector<int> &res)
    {
        int start=0;
        int end=n-1;
        int first=-1;
        int last=-1;
        
        // first index;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
                first=mid;
                end=mid-1;
            }
            else if(arr[mid] > x)
            {
                end=mid-1;
            }
            else
            {
                start=mid + 1;
            }
            
        }
        
        // last index
        start=0;
        end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
                last=mid;
                start=mid+1;
            }
            else if(arr[mid] > x)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            
        }
        
        res.push_back(first);
        res.push_back(last);
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> res;
        solve(arr,n,x,res);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
