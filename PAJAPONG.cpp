#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    if((x+y)/k&1)
	    std::cout << "Paja" << std::endl;
	    else
	     std::cout << "Chef" << std::endl;
	}
	return 0;
}