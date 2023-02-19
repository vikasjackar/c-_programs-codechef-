#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int x1=x,y1=y,ans=(n-1)*2;  
        // diagonal right lower
        ans=ans+min(n-x,n-y);
        
        // diagonal left lower
        ans=ans+min(y-1,n-x);

        // diagonal right upper
        ans=ans+min(n-y,x-1);
        // diagonal left upper
        ans=ans+min(x-1,y-1);
        cout<<ans<<endl;
    }
}

