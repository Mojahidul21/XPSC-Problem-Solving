#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input

int n;lli k,l=0,r=0,cnt=0;map<lli,int>m;

int main(){
    tourist

    cin>>n>>k;vli
    while(r<n){
        m[v[r]]++;
        while(m.size()>k){
            m[v[l]]--;
            if(!m[v[l]])m.erase(v[l]);
            l++;
        }
        cnt+=r-l+1,r++;
    }
    cout<<cnt;

    return 0;
}
