#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
    	int ar[1500]={0};
    	int a;cin>>a;
    	vector <int> v;
    	for(int l=0;l<2*a;l++){
    		int r;
    		cin>>r;
    		v.push_back(r);
    	}
    	for(int l=0;l<v.size();l++){
    		ar[v[l]]++;
    	}
    	int max = -1;
    	for(int r=0;r<1500;r++){
    		if(ar[r]>max){
    			max = ar[r];
    		}

    	}
    	cout<<max<<endl;
    }

}