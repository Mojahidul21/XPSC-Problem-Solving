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


ll q,a,b,n,s;

int main(){
    tourist

    cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        s<=b||(!(s%n)&&s<=a*n)||(s-a*n>=0&&s-a*n<=b)||(s-a*n<0&&s%n<=b)pyn dnl
    }

    return 0;
}
