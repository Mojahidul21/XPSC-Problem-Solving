#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input

int main(){
    tourist

    int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;vector<int>v;map<int,int>m;
		for(int i=1,x;i<=n;i++){
			cin>>x;
			m[x]++;
		}

		for(auto&[x,y]:m)if(y>=k)v.push_back(x);

		if(!v.size()){cout<<-1;tnl continue;}

 		int l=v[0],r=l,i=0,sz=v.size();
		while(i<sz){
			int j=i+1;
			while(j<sz&&v[j]-v[j-1]==1)j++;
			if(v[j-1]-v[i]>r-l)l=v[i],r=v[j-1];
			i=j;
		}
		cout<<l pss<<r;tnl
	}

    return 0;
}
