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

string int_to_string_conversion(int i){
    string s;
    while(i>0)s+='0'+(i%10),i/=10;
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    map<string,int>mp;
    while(t--){
        string s;
        cin>>s;
        if(mp[s]==0)cout<<"OK\n";
        else{
            cout<<s<<mp[s]enl
            mp[s+int_to_string_conversion(mp[s])]++;
        }
        mp[s]++;
    }

    return 0;
}
