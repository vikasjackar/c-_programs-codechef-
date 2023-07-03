#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool d=true;
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        for(int i=0; i<n; i++)
        {

            int sum=arr[i]+k-1;
            if(sum>m){
               d=false;
                break;
            }

        }

            if(d==false){
                cout<<"NO"<<endl;
            }
            else {
                cout<<"Yes"<<endl;
            }



}


return 0;
}