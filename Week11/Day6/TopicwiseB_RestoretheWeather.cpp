#include<bits/stdc++.h>
using namespace std;

#define tourist int main(){ios::sync_with_stdio(0);cin.tie(0);  // tourist - fast input output
#define Ace_Azimuth_Aviator return 0;}

#define pss <<' '                                               // pss - print single space
#define lss if(i!=n-1)cout<<' ';                                // lss - !(last single space)
#define pnl cout<<'\n';                                         // pnl - print new line
#define tnl if(t)pnl                                            // tnl - testcase new line

#define pye cout<<"YES";                                        // pye - print YES
#define pno cout<<"NO";                                         // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                            // pyn - print YES/NO
#define pny ?cout<<"NO":cout<<"YES";                            // pny - print NO/YES

#define lli long long                                           // lli - long long
#define imx INT_MAX;                                            // imx - INT_MAX
#define imn INT_MIN;                                            // imn - INT_MIN
#define con const int c=1e9                                     // con - constant
#define mod %1'000'000'007                                      // mod - modular

#define aii vector<int>a(n);for(auto&x:a)cin>>x;                // aii - a-vector int input
#define ali vector<lli>a(n);for(auto&x:a)cin>>x;                // ali - a-vector long long input
#define bii vector<int>b(n);for(auto&x:b)cin>>x;                // bii - b-vector int input
#define bli vector<lli>b(n);for(auto&x:b)cin>>x;                // bli - b-vector long long input

#define gnp goto print;                                         // gnp - go n print
#define pnt print:cout<<                                        // pnt - print

tourist

    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;

        set<pair<int,int>>a;
        for(int i=0,ai;i<n;++i)cin>>ai,a.insert({ai,i});

        multiset<int>b;int m=n,bi;
        while(m--)cin>>bi,b.insert(bi);

        vector<int>revisedb(n);auto ita=a.begin();auto itb=b.begin();
        for(;ita!=a.end();++ita,++itb)revisedb[ita->second]=*itb;

        for(const auto&element:revisedb)cout<<element<<' ';
        tnl
    }

Ace_Azimuth_Aviator
