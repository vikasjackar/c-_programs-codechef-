#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int temp=(c-a)/b;
	if(temp%2==0)
	cout<<"Lucky Chef"<<endl;
	else
	cout<<"Unlucky Chef"<<endl;
	return 0;
}
