#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    string s;
	    cin>>n>>s;
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1' && s[i+1]=='0'){
	            cnt++;
	            
	        }
	        
	    }
	    
	    cout<<cnt<<endl;
	    
	}
	return 0;
}
