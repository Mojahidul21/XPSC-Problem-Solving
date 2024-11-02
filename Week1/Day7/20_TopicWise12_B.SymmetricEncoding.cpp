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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        set<char>st;
        for(auto c:s)st.insert(c);
        string str="";
        for(auto it=st.begin();it!=st.end();it++)str+=*it;
        map<char,char>mp;
        for(int i=0,j=str.size()-1;i<=j;i++,j--)mp[str[i]]=str[j],mp[str[j]]=str[i];
        for(auto c:s)cout<<mp[c];
        dnl
    }

    return 0;
}
