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
#define imx INT_MAX                                 // imx - INT_MAX
#define imn INT_MIN                                 // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input

bool valid(int mx,int k,vector<int>&a){
    int n=a.size();
    vector<pair<int,int>>pre={{a[0]-mx,a[0]+mx}};

    for(int i=1;i<n;++i){
        vector<pair<int,int>>now;
        int l=a[i]-mx,h=a[i]+mx;

        for(auto&range:pre){
            int lt=max(range.first,l);
            int rt=min(range.second,h);
            if (lt<=rt)now.push_back({lt,rt});
        }

        if(now.empty()){
            k--;
            now.push_back({l,h});
        }

        pre=now;
        if(k<0)return 0;
    }

    return 1;
}

int unsavoriness(int n,int k,vector<int>&a){
    int l=0,r=1e9,result=1e9;

    while(l<=r){
        int m=l+(r-l)/2;
        if(valid(m,k,a))result=m,r=m-1;
        else l=m+1;
    }

    return result;
}

int main(){
    tourist

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;++i)cin>>a[i];
        cout<<unsavoriness(n,k,a);tnl
    }

    return 0;
}
