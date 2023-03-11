#include <iostream>
using namespace std;

int main() {
    long long int n,sum=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    
    if(sum==(n*(n+1))/2)
    cout << "YES\n";
    else
    cout << "NO\n";
	return 0;
}
