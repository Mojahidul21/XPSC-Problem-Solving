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
        int n;cin>>n;aii

        auto ok=[&](int mid){
            multiset<int>s(a.begin(),a.end());
            for(int i=1;i<=mid;++i){
                int x=mid-i+1;auto it=s.upper_bound(x);
                if(it==s.begin())return 0;

                x+=*s.begin(),s.erase(prev(it));
                if(!s.empty())s.erase(s.begin()),s.insert(x);
                else if(s.empty()&&i<mid)return 0;
            }

            return 1;
        };

        int l=0,r=(n+1)/2,m,ans;
        while(l<=r)m=l+(r-l)/2,ok(m)?ans=m,l=m+1:r=m-1;
        cout<<ans;tnl
    }

    return 0;
}
