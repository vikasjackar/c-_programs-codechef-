#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	std::string s;
	cin>>s;
	int n=s.size();
	int t,flag=0;
	cin>>t;
	while(t--)
	{
	    flag=0;
	    string temp;
	    cin>>temp;
	    int m=temp.size();
	    for(int i=0;i<m;i++)
	    {
	        char c=temp[i];
	        if(s.find(c) != std::string::npos);
	        else
	        {
	         flag=1;   
	        }
	    }
	    if(flag==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}
	return 0;
}
