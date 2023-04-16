#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void meal(){
    int n;
    cin>>n;
    unordered_map<char,int>m;
   
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        for(char j:s){
            m[j]++;
            
        }
       
    }
    cout<<min({m['c']/2,m['o'],m['d'],m['e']/2,m['h'],m['f']})<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    meal();
	}
	return 0;
}
