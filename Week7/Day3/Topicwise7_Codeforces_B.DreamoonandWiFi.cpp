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

int string_position(const string&str){
    int pos=0;
    for(const auto&c:str)pos+=c=='+'?1:-1;
    return pos;
}

int main(){
    tourist

    string s,r;
    cin>>s>>r;
    r.erase(remove(r.begin(),r.end(),'?'),r.end());

    int ps=string_position(s),pr=string_position(r),sz=s.size()-r.size();vector<bitset<10>>masks;
    for(int i=0;i<1<<sz;++i)masks.push_back(bitset<10>(i));

    int matched=0;
    for(const auto&mask:masks){
        int ones=mask.count(),zeros=mask.size()-ones+sz-10,net=ones-zeros;
        matched+=!(pr+net-ps);
    }
    cout<<fixed<<setprecision(12)<<(double)matched/masks.size();

    return 0;
}
