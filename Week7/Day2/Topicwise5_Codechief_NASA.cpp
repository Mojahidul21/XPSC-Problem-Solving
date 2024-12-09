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

vector<lli>palindromes;

void gather_palindromes(){
    for(lli i=0;i<1<<15;++i){
        string a=to_string(i),b=a;
        reverse(a.begin(),a.end());
        if(a==b)palindromes.push_back(i);
    }
}

int main(){
    tourist

    gather_palindromes();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;unordered_map<lli,lli>m;set<lli>s;
        for(lli i=0,x;i<n;++i){
            cin>>x;
            m[x]++;
            s.insert(x);
        }

        lli ans=0;
        for(auto&i:s){
            ans+=(m[i]*(m[i]+1))/2;
            for(int j=0;j<palindromes.size();++j){
                lli ck=i^palindromes[j];
                if(m[ck]&&ck<i)ans+=m[ck]*m[i];
            }
        }
        cout<<ans;tnl
    }

    return 0;
}
