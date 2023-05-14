#include <iostream>
using namespace std;
int main() {
	int t;cin>>t;
	for(int i=1 ; i<=t ; i++){
	    string s;cin>>s;
	    int a=(s[0]-'0')*10+(s[1]-'0');
	    int t=(s[3]-'0')*10+(s[4]-'0');
	    if(a>12)cout<<"DD/MM/YYYY"<<endl;
	    else if(t>12)cout<<"MM/DD/YYYY"<<endl;
	    else {cout<<"BOTH\n";}
	}
	return 0;
}
