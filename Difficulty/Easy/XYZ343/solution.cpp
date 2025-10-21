//savings account
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int total = x*y;
	    int count = 0;
	    while(total > z){
	        total -= y;
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	

}
