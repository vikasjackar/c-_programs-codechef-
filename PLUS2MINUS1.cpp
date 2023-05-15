#include <iostream>
using namespace std;

int fun(int y){
    if(y==0)
    return 1;
    else if(y==1)
    return 3;
    else 
    return 3*(y-1)+3;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int y;
	    cin>>y;
	    cout<<fun(y)<<endl;
	}
	return 0;
}
