#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<ll>v(n);
	    for(int i=0;i<n;i++)cin>>v[i];
	    sort(v.begin(),v.end());
	    cout<<min({v[n-1]-v[2],v[n-3]-v[0],v[n-2]-v[1]})<<endl;
	}

	return 0;

}
