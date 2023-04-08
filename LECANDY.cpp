#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    for (int i=0; i<t; i++)
    {
        int n, c, arrk[1000];
        cin>>n;
        cin>>c;
        int remcand = c;
        for(int k=0; k<n; k++)
        {
            cin >> arrk[k];
            remcand-=arrk[k];
        }
        
        if (remcand < 0)
        std::cout << "No" << std::endl;
        
        else
        cout<<"Yes"<<endl;
        
        
    }
	return 0;
}
