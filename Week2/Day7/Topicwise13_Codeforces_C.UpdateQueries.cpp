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

    int t,n,m,x;
    cin>>t;
    while(t--){
        string s,c;
        cin>>n>>m>>s;
        set<int>st;
        while(m--){
            cin>>x;
            st.insert(x);
        }
        cin>>c;
        sort(c.begin(),c.end(),greater<char>());
        for(auto it=st.begin();it!=st.end();it++){
            s[*it-1]=c.back();
            c.pop_back();
        }
        cout<<s enl
    }

    return 0;
}
