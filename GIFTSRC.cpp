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
        string s;
        cin>>n>>s;
        bool updown_first=true,side_first=true;
        int x=0,y=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='L' && side_first)
            {
                updown_first=true;
                x--;
                side_first=false;
            }
            else if (s[i]=='R' && side_first)
            {
                updown_first=true;
                x++;
                side_first=false;
            }
            else if (s[i]=='U' && updown_first)
            {
                updown_first=false;
                y++;
                side_first=true;
            }
            else if (s[i]=='D' && updown_first)
            {
                updown_first=false;
                y--;
                side_first=true;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}
