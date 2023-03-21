#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch;
        ch=64 + j;
        while(j<=n)
        {
            cout<<ch<< " ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
    
}