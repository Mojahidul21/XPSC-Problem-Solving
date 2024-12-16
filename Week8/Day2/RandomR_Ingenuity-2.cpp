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

    int t;cin>>t;
	while(t--){
        int x;cin>>x;char c;string ans(x,'!');vector<int>n,s,e,w;
        for(int i=0;i<x;++i)cin>>c,(c=='N'?n:c=='S'?s:c=='E'?e:w).push_back(i);

        while(n.size()>1)ans[n.back()]='R',n.pop_back(),ans[n.back()]='H',n.pop_back();
        while(s.size()>1)ans[s.back()]='R',s.pop_back(),ans[s.back()]='H',s.pop_back();
        while(e.size()>1)ans[e.back()]='R',e.pop_back(),ans[e.back()]='H',e.pop_back();
        while(w.size()>1)ans[w.back()]='R',w.pop_back(),ans[w.back()]='H',w.pop_back();

        if(n.size()!=s.size()){ans="NO";goto print;}
        else if(!n.empty())ans[n.back()]=ans[s.back()]='R';
        if(e.size()!=w.size()){ans="NO";goto print;}
        else if(!e.empty())ans[e.back()]=ans[w.back()]='H';

        print:cout<<(ans==string(x,'R')||ans==string(x,'H')?"NO":ans);tnl
    }

    return 0;
}
