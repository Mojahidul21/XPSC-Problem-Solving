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

int n;
vector<int>a;

lli count_inversions(){
    lli zeros=0,sum=0;
    for(int i=n-1;i>=0;--i){
        if(a[i])sum+=zeros;
        else zeros++;
    }
    return sum;
}

int main(){
    tourist

    int t;cin>>t;
	while(t--){
		cin>>n;a.clear();int l=-1,r=-1; // l -> leftmost zero, r -> rightmost one
        for(int i=0,v;i<n;++i){
            cin>>v;a.push_back(v);
            if(v)a[i]=v,r=i;
            else if(!v&&l==-1)l=i;
        }

        lli mx=count_inversions();
        if(l!=-1)a[l]=1,mx=max(mx,count_inversions()),a[l]=0;
        if(r!=-1)a[r]=0,mx=max(mx,count_inversions());

        cout<<mx;
		tnl
	}

    return 0;
}
