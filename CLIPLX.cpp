#include <bits/stdc++.h>
using namespace std;
int main()
{
    int loop = 0;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if (x <= y)
        {
            cout << "0" << "\n";
        }
        else
        {
            cout << x - y << "\n";
        }
    }
    return 0;
}