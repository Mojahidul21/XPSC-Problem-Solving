#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define dnl cout<<'\n';                 // dnl - detached new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no
#define ll  long long                   // ll  - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll m,k,q;
        cin>>m>>k>>q;
        ll ws=0,nw=0,n=m;
        while(n--){
            ll x;
            cin>>x;
            if(!n&&!ws&&x<=q)ws++,nw+=ws<k?0:((ws-k+1)*(ws-k+2))/2;
            else if(!n&&!ws)nw+=ws<k?0:((ws-k+1)*(ws-k+2))/2;
            else if(!n&&ws&&x<=q)ws++,nw+=ws<k?0:((ws-k+1)*(ws-k+2))/2;
            else if(!n&&ws)nw+=ws<k?0:((ws-k+1)*(ws-k+2))/2;
            else if(x>q)nw+=ws<k?0:((ws-k+1)*(ws-k+2))/2,ws=0;
            else ws++;
        }
        cout<<nw enl
    }

    return 0;
}
