/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool ispossible(int arr[],int n,int m, int mid)
{
    int studentcout=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum + arr[i] <=mid)
        {
            pagesum= pagesum + arr[i];
        }
        else
        {
            studentcout++;
            if(studentcout > m || arr[i]>mid)
                return false;
            
            pagesum=arr[i];
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    
    int s=0;
    int e=sum;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}
