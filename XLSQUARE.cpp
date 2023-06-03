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
        int n, a;
        cin >> n >> a;
        int square=sqrt(n);
        cout<<a*square<<endl;
    }
}
