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

    string s,t;
    cin>>s>>t;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i])ans++;
    }
    cout<<ans;

    return 0;
}
