#include <iostream>
using namespace std;


void solve(){
    
    string s;
    cin>>s;
    
    if(s.size()==1 || s.size()==2){
        cout<<"YES"<<endl;
        return;
    }
    
    if(s.size()%2!= 0) {
        for(int i=0;i<s.size();i++){
            if(s[i] != s[0]){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    
    for(int i=0;i<s.size();i+=2){
        if(s[i] != s[0]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=1;i<s.size();i+=2){
        if(s[i] != s[1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    
    cout<<"YES"<<endl;
}

int main() {
	 //your code goes here
    int testcase;
    cin>>testcase;
    while(testcase--){
        solve();
    }
	return 0;
}