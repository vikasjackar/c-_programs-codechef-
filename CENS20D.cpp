#include <iostream>
#include <bits/stdc++.h>
// #include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if (n==1)
        {
            cout<<0<<endl;
        }
        else{
            int count=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if ((a[i]&a[j])==a[i])
                    {
                        count++;
                    }
                    
                }
                
            }
            
            cout<<count<<endl;
        }
 
    }
}
