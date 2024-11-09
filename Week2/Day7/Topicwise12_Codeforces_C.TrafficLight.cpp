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
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        if(c=='g'){
            cout<<0 enl
            continue;
        }
        int cFpos=s.find(c);                // position of first c
        int gFpos=s.find("g");              // position of first 'g'
        string subS=s.substr(0,gFpos+1);    // substring up to first 'g'
        s+=subS;                            // substring is appended to main string
        int gCpos,mx=0;                     // position of current 'g'
        for(int i=s.size()-1;i>=cFpos;i--){
            if(s[i]=='g')gCpos=i;
            else if(s[i]==c)mx=max(mx,gCpos-i);
        }
        cout<<mx enl
    }

    return 0;
}
