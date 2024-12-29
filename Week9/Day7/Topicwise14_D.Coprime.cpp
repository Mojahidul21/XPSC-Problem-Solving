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

#define aii vector<int>a(n);\
            for(int i=0;i<n;i++)cin>>a[i];          // aii - a-vector integer input
#define bii vector<int>b(n);\
            for(int i=0;i<n;i++)cin>>b[i];          // bii - b-vector integer input
#define ali vector<lli>a(n);\
            for(int i=0;i<n;i++)cin>>a[i];          // ali - a-vector long long input
#define bli vector<lli>b(n);\
            for(int i=0;i<n;i++)cin>>b[i];          // bli - b-vector long long input

#define gnp goto print;                             // gnp - go n print
#define pnt print:cout<<                            // pnt - print

int main(){
    tourist

    int t;cin>>t;
    while(t--){
        int n;cin>>n;

        vector<int>a(n);map<int,int>ind;    // ind -> inidces
        for(int i=0,x;i<n;++i)cin>>x,a[i]=x,ind[x]=i+1;

        unordered_set<int>uni;              // uni -> unique values
        vector<int>ouv;                     // ouv -> ordered unique values
        for(auto it=a.rbegin();it!=a.rend();++it)
            if(uni.find(*it)==uni.end())ouv.push_back(*it),uni.insert(*it);

        int p=-1,q,r,s;
        for(int i=0;i<ouv.size();++i){
            q=ouv[i];
            if(2*ind[ouv[i]]<=p)break;
            for(int j=i;j<ouv.size();++j){
                r=ouv[j],s=ind[q]+ind[r];
                if(s<=p)break;
                if(gcd(q,r)==1)p=max(p,s);
            }
        }
        cout<<p;tnl
    }

    return 0;
}
