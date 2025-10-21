//Binary sum
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n,k;
	    cin>>n>>k;
	    if(n % 2 == 0){
	        if(k == n/2){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	    else{
	        if((n-1)/2 == k || (n+1)/2 == k){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
    }

}
