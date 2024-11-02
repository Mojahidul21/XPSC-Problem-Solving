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
        cout<<s.front();
        bool flag=true;
        for(int i=1;i<s.size();i++){
            if(!flag)cout<<s[i];
            else{
                if(s[i]==s[i-1]){
                    cout<<(s[i]!='a'?'a':'b')<<s[i];
                    flag=false;
                }
                else cout<<s[i];
            }
        }
        if(flag)cout<<(s.back()!='a'?'a':'b');
        dnl
    }

    return 0;
}
