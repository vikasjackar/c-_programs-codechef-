#include <iostream>
using namespace std;

int main() {
    int kp;
    cin>>kp;
    while(kp--){
        string str;
        int sum=0;
        cin>>str;
        for(int i=0;i<str.size();i++)
            sum=sum+(str[i]-'0');
        if(sum+1==str.size() || sum-1==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}