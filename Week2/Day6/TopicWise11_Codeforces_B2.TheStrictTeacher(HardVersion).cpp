#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define dnl cout<<'\n';                 // dnl - detached new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no

#define lli long long int               // lli - long long int
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
        int n,m,q;
        cin>>n>>m>>q;
        set<int>st;

        while(m--){
            int x;
            cin>>x;
            st.insert(x);
        }

        while(q--){
            int a;
            cin>>a;
            if(a<*st.begin())cout<<*st.begin()-1 enl
            else if(a>*st.rbegin())cout<<n-*st.rbegin() enl
            else cout<<(*st.upper_bound(a)-*(--st.upper_bound(a)))/2 enl
        }
    }

    return 0;
}
