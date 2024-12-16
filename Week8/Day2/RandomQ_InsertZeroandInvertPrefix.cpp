#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO
#define pny ?cout<<"NO":cout<<"YES";                // pny - print NO/YES

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

    int t,n;cin>>t;
	while(t--){
        cin>>n;vector<int>v(n+1);
        for(int i=1;i<=n;++i)cin>>v[i];
        if(v[n]==1){pno tnl}
        else{
            int cur=1;vector<int>ans;
            for(int i=n;i>=1;--i){
                if(!v[i])ans.push_back(0);
                else if(v[i]==1&&v[i-1]!=1)ans.push_back(cur),cur=1;
                else ans.push_back(0),cur++;
            }
            pye pnl
            for(auto const&x:ans)cout<<x pss;
            tnl
        }
    }

    return 0;
}
