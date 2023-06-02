/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ispossible(int arr[],int k, int mid,int n)
{
    int cowCount=1;
    int lastpos=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]-lastpos >= mid)
        {
            cowCount++;
            if(cowCount==k)
                return true;
                
            lastpos=arr[i];
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr + n);
    int s=0;
    int e=arr[n-1];
    int ans=-1;
    
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(ispossible(arr,k,mid,n))
        {
            ans=mid;
            s=mid + 1;
        }
        else
        {
            e=mid - 1;
        }
    }
    cout<<ans<<endl;
    

    return 0;
}
