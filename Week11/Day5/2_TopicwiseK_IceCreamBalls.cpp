#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define lss if(i!=n-1)cout<<' ';                    // lss - !(last single space)
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO
#define pny ?cout<<"NO":cout<<"YES";                // pny - print NO/YES

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e9                         // con - constant
#define mod %1000000007                             // mod - modular

#define aii vector<int>a(n);for(auto&x:a)cin>>x;    // aii - a-vector int input
#define ali vector<lli>a(n);for(auto&x:a)cin>>x;    // ali - a-vector long long input
#define bii vector<int>b(n);for(auto&x:b)cin>>x;    // bii - b-vector int input
#define bli vector<lli>b(n);for(auto&x:b)cin>>x;    // bli - b-vector long long input

#define gnp goto print;                             // gnp - go n print
#define pnt print:cout<<                            // pnt - print

int main(){
    tourist

    int t;cin>>t;
    while(t--){
        lli n;cin>>n;

        auto ok=[&](lli mid){return mid*(mid-1)/2+mid>=n;};

        lli l=1,r=min<lli>(2e9,2*n),m,ans;
        while(l<=r)m=(l+r)/2,ok(m)?ans=m,r=m-1:l=m+1;

        lli y=n-ans*(ans-1)/2;
        cout<<(ans*(ans+1)/2<=n?min(ans+y,ans+1+n-ans*(ans+1)/2):ans+y);
        tnl
    }

    return 0;
}
