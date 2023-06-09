#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin>> n>>x;
	    int m = n * x;
	   
	    
	    if(m > 9999 && m <= 99999){
	        cout << "YES"<< endl;
	    }
	    else{
	        cout<< "NO" << endl;
	    }
	}
	return 0;
}