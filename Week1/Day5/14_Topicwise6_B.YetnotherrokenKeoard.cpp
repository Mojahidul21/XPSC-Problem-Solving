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
        string s;
        cin>>s;

        list<pair<int,char>>lower,upper;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                if(!lower.empty())lower.pop_back();
            }
            else if(s[i]=='B'){
                if(!upper.empty())upper.pop_back();
            }
            else if(s[i]<'a')upper.push_back({i,s[i]});
            else lower.push_back({i,s[i]});
        }

        for(int i=0;i<s.size();i++){
            if(!lower.empty()&&lower.front().first==i){
                cout<<lower.front().second;
                lower.pop_front();
            }
            else if(!upper.empty()&&upper.front().first==i){
                cout<<upper.front().second;
                upper.pop_front();
            }
        }
        dnl
    }

    return 0;
}
