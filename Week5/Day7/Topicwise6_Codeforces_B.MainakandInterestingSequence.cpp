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
        int n,m;cin>>n>>m;
        if((!(n%2)&&m%2)||m<n)pno
        else if(n%2){
            pye pnl
            for(int i=1;i<n;++i)cout<<"1 ";
            cout<<m-n+1;
        }
        else{
            pye pnl
            for(int i=2;i<n;++i)cout<<"1 ";
            cout<<(m-n+2)/2 pss<<(m-n+2)/2;
        }
        tnl
	}

    return 0;
}
