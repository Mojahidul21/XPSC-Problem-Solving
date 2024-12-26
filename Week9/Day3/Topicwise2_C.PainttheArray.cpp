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
        lli n,x,y,adjacent=0,ogcd,egcd,oflag=1,eflag=1;set<lli>o,e;cin>>n;
        for(int i=1;i<=n;++i){
            cin>>x;
            if(i==1)y=x;
            else if(!adjacent){
                if(x==y)adjacent=1;
                else y=x;
            }
            if(!adjacent){
                if(i%2){
                    if(o.empty())ogcd=x,o.insert(x);
                    else if(o.find(x)==o.end()){
                        if(ogcd!=1)ogcd=gcd(ogcd,x);
                        o.insert(x);
                    }
                }
                else{
                    if(e.empty())egcd=x,e.insert(x);
                    else if(e.find(x)==e.end()){
                        if(egcd!=1)egcd=gcd(egcd,x);
                        e.insert(x);
                    }
                }
            }
        }
        if(adjacent){cout<<0;tnl continue;}
        if(egcd!=1){
            for(auto it=o.lower_bound(egcd);it!=o.end();++it)if(!(*it%egcd)){oflag=0;break;}
            if(oflag){cout<<egcd;tnl continue;}
        }
        for(auto it=e.lower_bound(ogcd);it!=e.end();++it)if(!(*it%ogcd)){eflag=0;break;}
        cout<<(eflag?ogcd:0);tnl
    }

    return 0;
}
