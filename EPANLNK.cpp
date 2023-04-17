#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
        cin>>s;
        int lastindex=s.size()-1;
        
        if(s.size()>=2){
            //cout<<s<<endl;
            int lastdigit=int(s[lastindex])-48;
            int SecondLastDigit=int(s[lastindex-1])-48;
            int num=lastdigit+10*SecondLastDigit;
            
            cout<<num%20<<endl;
        }
        else{//Minimum of 1 Digit
            int lastdigit=int(s[lastindex])-48;//Last Digit is the only digit
            int num=lastdigit;
            
            cout<<num%20<<endl;
        }
	}
	return 0;
}
