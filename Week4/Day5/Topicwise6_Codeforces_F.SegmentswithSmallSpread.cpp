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

int main(){
    tourist

    int n,l=0,r=0;lli k,diff,ans=0;multiset<lli>ms;
    cin>>n>>k;vli
    while(r<n){
        ms.insert(v[r]);
        diff=*ms.rbegin()-*ms.begin();
        if(diff<=k)ans+=r-l+1;
        else{
            while(l<=r){
                if(diff<=k)break;
                ms.erase(ms.find(v[l]));
                diff=*ms.rbegin()-*ms.begin();
                l++;
            }
            if(diff<=k)ans+=r-l+1;
        }
        r++;
    }
    cout<<ans;

    return 0;
}
