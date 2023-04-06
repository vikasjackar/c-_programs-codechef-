//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int sum=0;
        int lsum=0,rsum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum+A[i];
        }
        if(N==1)
        {
            return 1;
        }
        else if(N==2)
        {
            if(A[0]==0)
            return 2;
            else if(A[1]==0)
            return 1;
            else 
            return -1;
        }
        else
        {
            lsum=0;
            for(int i=0;i<N;i++)
            {
                rsum=sum - A[i];
                if(lsum==rsum)
                return (i+1);
                else
                {
                    lsum=lsum+A[i];
                    sum=sum-A[i];
                }
            }
            return -1;
        }
        return -1;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
