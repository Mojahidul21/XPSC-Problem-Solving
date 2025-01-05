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

    int x,n;
    cin>>x>>n;

    set<int>p;                                      // p -> positions of lights including terminals
    p.insert(0),p.insert(x);

    multiset<int>d;                                 // d -> distances without light(s)
    d.insert(x);

    while(n--){
        cin>>x;

        auto rit=p.lower_bound(x),lit=prev(rit);    // lit -> left iterator, rit -> right iterator
        int lp=*lit,rp=*rit;                        // lp -> left position, rp -> right position
        p.insert(x),d.erase(d.find(rp-lp)),d.insert(x-lp),d.insert(rp-x);

        cout<<*d.rbegin();
        if(n)cout<<' ';
    }

    return 0;
}
