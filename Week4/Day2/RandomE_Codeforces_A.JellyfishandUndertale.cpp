#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define snl cout<<'\n'                              // snl - staring new line
#define enl <<'\n';                                 // enl - ending new line
#define dnl cout<<'\n';                             // dnl - detached new line

#define py  cout<<"YES";                            // py  - print YES
#define pn  cout<<"NO";                             // pn  - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define pss <<" "                                   // pss - print single space

#define ll  long long                               // ll  - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

int main(){
    tourist

    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        ll sum=b;
        while(n--){
            ll x;
            cin>>x;
            sum+=min(x,a-1);
        }
        cout<<sum enl
    }

    return 0;
}
