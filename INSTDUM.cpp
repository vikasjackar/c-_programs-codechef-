#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long  n ;
    cin >> n ;
    long long  arr[n];
    // str = arr[i]/i*100 ;
    for(int i = 0 ; i < n ; i++){
        cin>> arr[i] ;
    }
    int count = 0;
   double curSum = 0;
    for(int i=0; i<n; i++) {
        curSum += arr[i];
    
        if((curSum /(i+1)) == 1) count++;
    }
     cout << count << endl ;
}

int main() { 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
